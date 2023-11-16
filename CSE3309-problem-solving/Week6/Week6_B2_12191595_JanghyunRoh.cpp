#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int N;
int maxDist;

vector<pair<int, int>> *adjList;
bool* visited;

int dfs(int node) {
    visited[node] = true;

    int max1 = 0, max2 = 0;
    for(int i=0; i < adjList[node].size(); i++) {
        pair<int, int> tmp = adjList[node][i];  // 인접 노드

        if(!visited[tmp.first]) {   //
            int tmp_dist = dfs(tmp.first) + tmp.second;
            if(max1 < tmp_dist) {
                max2 = max1;
                max1 = tmp_dist;
            }
            else if(max2 < tmp_dist) {
                max2 = tmp_dist;
            }

            maxDist = max(maxDist, max1 + max2);
        }
    }

    return max1;
}

int main() {
    cin >> N;
    adjList = new vector<pair<int, int>>[N + 1];
    visited = new bool[N + 1]{false, };
    maxDist = 0;

    int a, b, c;
    for(int i=0;i<N;i++) {
        cin >> a >> b >> c;
        adjList[a].push_back(make_pair(b, c));
        adjList[b].push_back(make_pair(a, c));
    }

    dfs(1);

    cout << maxDist << "\n";

    return 0;
}