//#include <iostream>
//
//int main() {
//	int N, K;
//	std::cin >> N >> K;
//	int a = 1, b = 1, c = 1;
//	for(int i = N; i >= 1; i--)
//		a *= i;
//	for (int i = N-K; i >= 1; i--)
//		b *= i;
//	for (int i = K; i >= 1; i--)
//		c *= i;
//	printf("%d", a / (b*c));
//	return 0;
//}