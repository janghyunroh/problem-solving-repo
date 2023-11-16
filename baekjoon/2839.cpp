//#include <iostream>
//
//using namespace std;
//
//int cal(int N) {
//    int val = N;
//    int res = 0;
//    while(N > 0) {
//        N -= 5;
//        res++;
//    }
//    if(N==0) return res;
//    else {
//        while(N < val) {
//            N += 5;
//            res--;
//            int curN = N;
//            int curRes = res;
//            while(N > 0) {
//                N -= 3;
//                res++;
//            }
//            if(N==0) return res;
//            else {
//                N = curN;
//                res = curRes;
//            }
//        }
//        return -1;
//    }
//}
//
//int main() {
//    int N;
//    cin >> N;
//    cout << cal(N) << "\n";
//}