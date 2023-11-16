// #include <iostream>
// #include <vector>

// using namespace std;

// int N;
// vector<int> v;
// int *dp;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     cin >> N;
//     dp = new int[N];
//     int a;
//     while(N--) {
//         cin >> a;
//         v.push_back(a);
//     }

//     for(int i=v.size() - 1; i >= 0; i--) {

//         //last index
//         if(i==v.size() - 1) dp[i] = 1;


//         else {


//             if(v[i]==0) {   //no jump
//                 dp[i] = dp[i + 1] + 1;
//             }


//             else {  //jump
//                 if(i + v[i] >= v.size() - 1) dp[i] = 1; //넘어가는 경우
//                 else dp[i] = dp[i + v[i] + 1] + 1;  //넘어가지 않고 착지하는 경우
//             }   
//         }
//     }

//     for(int i=0;i<v.size();i++) cout << dp[i] << " ";
//     cout << "\n";
//     return 0;
// }