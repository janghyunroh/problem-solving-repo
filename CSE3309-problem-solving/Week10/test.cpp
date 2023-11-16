#include <iostream>
#include <queue>
#define INF 2147483647
using namespace std;

//N: 정점 개수
//M: 간선 개수
int T, N, M;
vector<pair<int, int>>*adjList;

void dijkstra(int src) {

    /**
     * visited가 false: Unseen or fringe
     * pq안에 push: fringe
     * visited가 true: Tree
    */

    bool *visited = new bool[N + 1];   
    int *dist = new int[N + 1];
    int *parent = new int[N + 1];

    priority_queue<pair<int, pair<int, int>>> pq;
    /**
     * e.first: weight
     * e.second.first: src
     * e.second.second: dest
    */

    for(int i=1;i<=N;i++) {
        dist[i] = INF;      //
        parent[i] = -1;     //
        visited[i] = false; //unseen
    }

    dist[src] = 0;          //define d(s, s) = 0
    parent[src] = src;      
    visited[src] = true;    //reclassify src as tree
    
    for(int i=0;i<adjList[src].size();i++) {
        pq.push({-adjList[src][i].second, {src, adjList[src][i].first}});  

        //reclassify all vertices adjacent to src as fringe 
    }

    //while there are fringe vertices
    while(!pq.empty()) {

        //select and edge between a tree vertex and a fringe vertex
        //such that the weight of the edge is minimum
        int weight = -pq.top().first;
        int src = pq.top().second.first;    //t
        int dest = pq.top().second.second;  //v

        pq.pop();

        visited[dest] = true;   //reclassify v as tree

        //define d(s, v) = d(s, t) + w(t, v)
        dist[dest] = dist[src] + weight;

        //reclassify all unseeen vertices adjacent to v as fringe
        for(int i=0;i<adjList[dest].size();i++) {

            int next = adjList[dest][i].first;
            int nextWeight = adjList[dest][i].second;

            if(!visited[next]) { 
                pq.push({-dist[next], {src, next}});
            }
        }
    }
    

    priority_queue<pair<int, pair<int, int>>> pq;
}


int main() {
    cin >> T;
    while(T--) {
        cin >> N >> M;
        adjList = new vector<pair<int, int>>[N + 1];
        for(int i=0;i<M;i++) {
            int u, v, w;
            cin >> u >> v >> w;
            adjList[u].push_back({v, w});
            adjList[v].push_back({u, w});
        }



    }
}