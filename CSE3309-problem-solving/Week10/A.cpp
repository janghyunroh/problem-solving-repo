#include <iostream>

using namespace std;

int T, N, x, y, w, h;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--) {
        int arr[1000][1000]{0, };
        int cnt = 0;
        cin >> N;
        while(N--) {

            cin >> x >> y >> w >> h;
            for(int i=x;i<x+w;i++) {
                for(int j=y;j<y+h;j++) {
                    if(arr[i][j] == 0) {
                        cnt++;
                        arr[i][j] = 1;
                    }
                }
            }

            
        }
        cout << cnt << "\n";
    }
}