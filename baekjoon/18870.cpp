// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <utility>
// #include <unordered_map>

// using namespace std;

// int N;
// vector<int> v;
// vector<int> v2;
// unordered_map<int, int> um;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     cin >> N;

//     int a;
//     while(N--) {
//         cin >> a;
//         v.push_back(a);
//         v2.push_back(a);
//     }

//     sort(v2.begin(), v2.end());
//     v2.erase( unique(v2.begin(), v2.end()), v2.end() );
//     for(int i = 0; i < v2.size(); i++) {
//         um.insert({v2[i], i});
//     }

//     for(int num : v) {
//         cout << um[num] << " ";
//     }

//     return 0;
// }