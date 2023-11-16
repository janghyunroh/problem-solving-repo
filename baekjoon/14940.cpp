// #include <iostream>
// #include <queue>

// using namespace std;

// int N, M;
// int **arr;
// bool **visited;

// int dx[4] = {0, 0, -1, 1};
// int dy[4] = {-1, 1, 0 ,0};

// int startI, startJ;

// void bfs() {
//     queue<pair<int, int>> q;

//     //시작점 방문
//     arr[startI][startJ] = 0;
//     q.push(make_pair(startI, startJ));
//     visited[startI][startJ] = true;

//     //bfs 시작
//     while(!q.empty()) {
        
//         pair<int, int> tmp = q.front();
//         q.pop();

//         int curI = tmp.first;
//         int curJ = tmp.second;

//         //상하좌우 방문
//         for(int i=0;i<4;i++) {
//             int nextI = curI + dy[i];
//             int nextJ = curJ + dx[i];

//             //범위 내부, 미방문, 방문 가능
//             if(nextI >= 0 && nextI < N && nextJ >= 0 && nextJ < M && !visited[nextI][nextJ] && arr[nextI][nextJ] == 1) {
//                 arr[nextI][nextJ] = arr[curI][curJ] + 1;
//                 q.push(make_pair(nextI, nextJ));
//                 visited[nextI][nextJ] = true;
//             }
//         }
//     }

//     //나머지 미방문 좌표들 -1로 변경
//     for(int i=0;i<N;i++) {
//         for(int j = 0; j < M;j++) {
//             if(!visited[i][j] && arr[i][j] != 0) arr[i][j] = -1;
//         }
//     }

//     return;
// }

// int main() {
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(0);
//     // cout.tie(0);

//     cin >> N >> M;

//     arr = new int *[N];
//     visited = new bool *[N];

//     int a;
//     for(int i = 0; i < N; i++) {

//         arr[i] = new int[M];
//         visited[i] = new bool[M];

//         for(int j = 0; j < M; j++) {

//             visited[i][j] = false;

//             cin >> a;
//             if(a == 2) {    //유일한 시작 위치 찾기
//                 startI = i;
//                 startJ = j;
                
//             }
//             arr[i][j] = a;
//         }
//     }

//     bfs();

//     //print
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < M; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }