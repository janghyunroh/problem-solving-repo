// /*  input
// 10
// TCCTCTCTTC
// CCCTTTTCCTTT
// CTCTTTCTTTTCTTCTTCTCCCTCCCCC
// CTTCTTTCTTTCCTCCTC
// TTTCCCCCCCCCTCTCCCT
// CCTCCCCTCCTTTTCCCTTCTCTCCT
// TCCTTCTCCTCCCTTTTCCTC
// CCTTTTTCCCCCCTCCTC
// CTTTTCCTCCTCTCCCCCTTCTCC
// TCTTCTTCCCTCTCCCTTTTCCTTCT

// */

// /*  output
// 8
// 6
// 4
// 2
// 4
// 10
// 16
// 4
// 6
// 18

// */

// /**
//  * 최대 부분 배열 크기 문제
//  * 투 포인터
//  * 
//  * 1. 부분 배열은 절대 T로 시작할 수 없음. 첫 문자는 무조건 C. -> C로 시작하는 배열에 대해서만 확인
//  * 
//  * 2. C를 정하고 나면 r 포인터가 움직이면서 "이전의 모든 C의 개수 > T의 개수"를 만족하면 이동 (총C의 개수 == 총T의 개수 를 만족하면 size 갱신)
//  * 
//  * -> 개수 조건이 C < T 인 경우 이 부분배열을 포함하는 모든 배열이 위배되므로 배열 change
//  * -> 개수 조건은 계속 맞지만 동일 조건이 안 맞는 경우 끝까지 진행해서 끝 도달해도 안되면 배열 change
//  * 
//  * 3. 배열 change -> l 포인터를 어디로 세팅해야 하는가?
//  * 
//  * -> 
//  * 
//  * 
//  * 
//  * 
//  * 
// */

// #include <iostream>
// #include <stack>

// using namespace std;

// int T;
// string s;

// int solve(string s) {
//     int n = s.size();
//     int maxSize = 0;

//     stack<int> st;
//     st.push(-1);

//     for(int i = 0; i < n; i++) {
//         if(s[i] == 'C') st.push(i);
//         else {
//             st.pop();
//             if(st.empty()) st.push(i);
//             else maxSize = max(maxSize, i - st.top());
//         }
//     }

//     return maxSize;
// }

// int main() {
//     cin >> T;
//     while(T--) {
//         cin >> s;
//         cout << solve(s) << "\n";
//     }
    
// }