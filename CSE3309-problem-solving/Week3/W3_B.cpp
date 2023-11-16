// //W3_B - 카드게임
// //고난도 백트래킹
// /**
//  * 기본 아이디어
//  * case1: 같은 숫자
//  * case2: 작은 숫자 -> 바로 종료 가능(나머지 index에 대해 for loop 후 return)
//  * case3: 없음 - 백트래킹 시작 (while prev_pos >= 0)
//  * 	-> 이전 카드는 전부 case1이었을 것임
//  * 	-> 그 아래 카드 중 case2인지 case3인지 판별
//  * 	-> case2 만날 시 위와 동일하게 종료
//  *  -> 끝까지 없는 경우(prev_pos = -1) answer[0] = -1, 나머지는 largest로 채움
//  * 	
//  * 배열 완성 후 앞부분 제거 과정 별도 필요 - find_start_pos
//  * 
// */
// #include <iostream>

// using namespace std;
// using ll = long long;

// int T, C;
// string N;		//�־��� ����
// bool cards[11];	//�־��� ī��
// int largest;	//�־��� ī��� �� ���� ū ����

// int *answer; //���� �迭


// int find_smaller(int n) {
// 	for(int i = n - 1; i >=0; i--)
// 		if (cards[i])
// 			return i;
// 	return -1;
// }

// void cal_answer(int pos, int len) {
// 	int c = (int)(N[pos] - '0');	//N�� pos��° ����
// 	int x;

// 	if (cards[c]) {	//������ ī�尡 �ִ� ��� (case 1)
// 		answer[pos] = c;
// 		if (pos < len - 1)
// 			cal_answer(pos + 1, len);		//��ͷ� ��� ����
// 		return;
// 	}

// 	else if ((x = find_smaller(c)) != -1) {	//������ ī�尡 ���� ���� ī�尡 �����ϴ� ���(case 2) - ���� �ִ� ī�� ���� ���� ���ڸ����� �ִ밪���� ä��� ����
// 		answer[pos] = x;
// 		for (int i = pos + 1; i < len; i++)
// 			answer[i] = largest;
// 		return;
// 	}	


// 	else {	//������ ī�尡 ���� ��� (case 3) - �ڷ� ��Ʈ��ŷ �ϸ� 2�� 3�� ���Ǻ�.(���� �������� ���� case 1�� ����)
// 		int prev_pos = pos - 1;
// 		while (prev_pos >= 0) {
// 			if ( ( x = find_smaller(answer[prev_pos])) != -1) {	//case2�� ��� - 
// 				answer[prev_pos] = x;
// 				for (int i = prev_pos + 1; i < len; i++) answer[i] = largest;
// 				return;
// 			}

// 			//case 3�� ��� - �׳� �״�� ��Ʈ��ŷ
// 			prev_pos--;
// 		}

// 		//while�� ���� ������ ��� -> ������ ��Ʈ��ŷ �ص� ī�尡 ���� ��� -> �ڸ����� �ϳ� ������ �ִ� ī���� ������ ���� ����
// 		answer[0] = -1;
// 		for (int i = 1; i < len; i++) {
// 			answer[i] = largest;
// 		}
// 		return;
// 	}
// }

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);
	

// 	cin >> T;
// 	while (T--) {
		
// 		//init process
// 		largest = 0;
// 		for (int i = 1; i < 10; i++)cards[i] = false;
// 		answer = new int[10];
// 		cin >> N;
// 		cin >> C;

// 		//input
// 		int card;
// 		for (int i = 0; i < C; i++) {
// 			cin >> card;
// 			cards[card] = true;
// 		}

// 		largest = find_smaller(10); //�ִ� ī�� ���ϱ�

// 		cal_answer(0, N.length());	// answer �迭 ���

// 		//�պκ�
// 		int start_pos = N.length();

// 		//������ ���� �κ�(�տ� ���� �κ� ����) ã��
// 		for (int i = 0; i < N.length(); i++) {
// 			if (answer[i] != -1 && answer[i] != 0) {
// 				start_pos = i;
// 				break;
// 			}
// 		}
		
// 		// ���
// 		if (start_pos == N.length() - 1) cout << 0 << "\n";
// 		else {
// 			for (int i = start_pos; i < N.length(); i++)
// 				cout << answer[i];
// 			cout << "\n";
// 		}

// 	}

// 	return 0;
// }