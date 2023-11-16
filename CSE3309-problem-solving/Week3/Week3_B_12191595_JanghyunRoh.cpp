#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void printMax(string N, int* arr, int size) {
	vector<int> ans;

	bool flag = false;			//0999패턴이 인식된 경우(나머지 반복을 최대 카드로 채우기 위함)
	bool lessNum = false;		//자리수 부족한 패턴 발생


	for (int i = 0; i < N.length(); i++) {	//인하의 숫자를 앞에서부터 비교




		//if (flag) {
		//	//cout << arr[size - 1];	//최대 크기 카드 사용
		//	break;
		//}


		//else {

			//패턴이 아직 안된 경우 -> 카드 비교
			for (int j = size - 1; j >= 0; j--) {	// 큰 순서대로 비교

				//
				if (arr[j] == ((int)(N[i] - 48))) {
					ans.push_back(arr[j]);
					//cout << arr[j];
					break;
				}

				else if (arr[j] < (int)(N[i] - 48)) {
					ans.push_back(arr[j]);
					//cout << arr[j];
					flag = true;
					break;
				}

				else if (j == 0) {	//마지막 카드까지 못 쓴 경우 -> 자리수 적은 최대 값으로 해야 함
					
					lessNum = true; 
					break;
					//-> flag를 키고 반복문 탈출, 처음부터 다시 출력

					//if (isFirstNum) {	// 첫 숫자라 0을 못 쓰는 경우(그냥 넘기고 isFirstNum을 false로 설정)
						//isFirstNum = false;
					
					//}

					//else if (!isFirstNum) {//첫 숫자가 아닌 경우
						//cout << 0;
						//isFirstNum = false;
						//flag = true;
					//}
				}


			}
		//}

		
	}
	//
	if (flag) {
		for (int i = 0; i < ans.size(); i++) cout << ans.at(i);
		for (int i = 0; i < N.size() - ans.size(); i++) cout << arr[size - 1];
		cout << "\n";
	}

	//
	else if (lessNum) {
		for (int i = 0; i < N.size() - 1; i++) cout << arr[size - 1];
	}

	else {
		for (int i = 0; i < ans.size(); i++) cout << arr[size - 1];
	}

	
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, C;
	string N;
	cin >> T;
	while (T--) {
		cin >> N;	//인하가 말한 수 (stirng)
		cin >> C;
		int* arr = new int[C];
		for (int i = 0; i < C; i++) {
			cin >> arr[i];
		}

		//전달 위해 정렬
		sort(arr, arr + C);

		printMax(N, arr, C);
	}
}