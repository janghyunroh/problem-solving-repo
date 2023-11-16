#include <iostream>
#include <queue>

#define INF 100000;
using namespace std;

int T, N, M;
int **map;
int **ans;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1 ,0 ,0};

priority_queue<pair<int, pair<int, int>>> pq;

int main() {

    cin >> T;

    while(T--) {
        cin >> N >> M;

        map = new int*[M + 1];
        ans = new int*[M + 1];
        
        string s;
        for(int i=1;i<=M;i++) {
            map[i] = new int[N + 1];
            ans[i] = new int[N + 1];
            cin >> s;
            for(int j=1;j<=N;j++) {
                map[i][j] = s[j-1] - '0';
                ans[i][j] = INF;
            }
        }

        ans[1][1] = 0;
        pq.push(make_pair(0, make_pair(1, 1)));
        
        //
        while(!pq.empty()) {
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            int cost = -pq.top().first;
            pq.pop();

            if(ans[x][y] < cost) continue;

            for(int i=0;i<4;i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 1 || nx > M || ny < 1 || ny > N) continue;

                int nextCost = cost + map[nx][ny];

                if(nextCost < ans[nx][ny]) {
                    ans[nx][ny] = nextCost;
                    pq.push(make_pair(-nextCost, make_pair(nx, ny)));
                }
            }
        }
        cout << ans[M][N] << endl;

    }

    return 0;

}