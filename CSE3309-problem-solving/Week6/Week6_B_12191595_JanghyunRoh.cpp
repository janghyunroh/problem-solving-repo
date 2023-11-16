#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int N;

vector<pair<int, int>> *adjList;
bool *visited;
int maxDist;
int targetNode;

void dfs(int node, int sum) {
    visited[node] = true;

    if(sum > maxDist) {
        maxDist = sum;
        targetNode = node;
    }

    for(int i = 0; i < adjList[node].size(); i++) {
        pair<int, int> tmp = adjList[node][i];  // tmp: adjacent node

        //tmp.first : node num
        //tmp.second : weight of the edge [node ~ tmp]
        if(!visited[tmp.first]) {
            dfs(tmp.first, sum + tmp.second);
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    //Initialization
    maxDist = 0;
    cin >> N;
    adjList = new vector<pair<int, int>>[N + 1];
    visited = new bool[N + 1] {false, };

    //input of edges
    int a, b, c;
    for(int i =0; i < N - 1; i++) {
        cin >> a >> b >> c;

        //edge 추가
        adjList[a].push_back(make_pair(b, c));
        adjList[b].push_back(make_pair(a, c));

    }

    dfs(1, 0);
    for(int i = 0; i < N + 1; i++) visited[i] = false;
    dfs(targetNode, 0);

    cout << maxDist << "\n";

    return 0;



}