//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//	unsigned long long L, r = 31, M = 1234567891, sum = 0;
//	string s;
//	cin >> L >> s;
//	for (int i = 0; i < L; i++) {
//		unsigned long long rr = 1;
//		for (int j = 0; j < i; j++)
//			rr = (rr * r) % M;
//		sum += ((((int)s[i] - 96) * rr)%M);
//		sum = sum % M;
//	}
//	printf("%llu", sum);
//}