// //W1_B - dp fibonacci
// //bottom up으로 전역 배열 계산 후 단순 출력
// #include <iostream>

// using namespace std;

// int T, N;
// int arr[10000001];

// //bottum-up 방식으로 피보나치 수열을 구함
// void cal() {
// 	arr[0] = 1;
// 	arr[1] = 1;
// 	for (int i = 2; i <= 10000000; i++) {
// 		arr[i] = (arr[i - 1] + arr[i - 2]) % 1000000007;
// 	}
// }


// int main() {
	 
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);
// 	cal();

// 	cin >> T;
// 	while (T--) {
// 		cin >> N;
// 		cout << arr[N] << "\n";
// 	}

// 	return 0;
// }