//#include <iostream>
//
//using namespace std;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int K, n, cur = 0;
//	cin >> K;
//	int* arr = new int[K];
//	while(K--) {
//
//		cin >> n;
//
//		if (n == 0) {
//			cur--;
//			arr[cur] = 0;
//			continue;
//		}
//
//		arr[cur] = n;
//		cur++;
//		
//	}
//
//	int sum = 0;
//	for (int i = 0; i <= cur; i++) {
//		sum += arr[i];
//	}
//
//	cout << sum << "\n";
//
//}