#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void printMax(string N, int* arr, int size) {
	vector<int> ans;

	bool flag = false;			//0999������ �νĵ� ���(������ �ݺ��� �ִ� ī��� ä��� ����)
	bool lessNum = false;		//�ڸ��� ������ ���� �߻�


	for (int i = 0; i < N.length(); i++) {	//������ ���ڸ� �տ������� ��




		//if (flag) {
		//	//cout << arr[size - 1];	//�ִ� ũ�� ī�� ���
		//	break;
		//}


		//else {

			//������ ���� �ȵ� ��� -> ī�� ��
			for (int j = size - 1; j >= 0; j--) {	// ū ������� ��

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

				else if (j == 0) {	//������ ī����� �� �� ��� -> �ڸ��� ���� �ִ� ������ �ؾ� ��
					
					lessNum = true; 
					break;
					//-> flag�� Ű�� �ݺ��� Ż��, ó������ �ٽ� ���

					//if (isFirstNum) {	// ù ���ڶ� 0�� �� ���� ���(�׳� �ѱ�� isFirstNum�� false�� ����)
						//isFirstNum = false;
					
					//}

					//else if (!isFirstNum) {//ù ���ڰ� �ƴ� ���
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
		cin >> N;	//���ϰ� ���� �� (stirng)
		cin >> C;
		int* arr = new int[C];
		for (int i = 0; i < C; i++) {
			cin >> arr[i];
		}

		//���� ���� ����
		sort(arr, arr + C);

		printMax(N, arr, C);
	}
}