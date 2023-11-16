#include <iostream>
#include <unordered_map>

using namespace std;

int T, N, C;
string s;
unordered_map<string, int> m;
string* arr;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--) {

        cin >> N;
        arr = new string[N];
        for(int i=0;i<N;i++) {
            cin >> s;
            arr[i] = s;
            m.insert({s, i});
        }

        cin >> C;
        while(C--) {
            cin >> s;
            if(s[0] >= '0' && s[0] <= '9') cout << arr[stoi(s) - 1] << "\n";
            else cout << m.at(s) + 1 << "\n";
        }
    }

    return 0;
}