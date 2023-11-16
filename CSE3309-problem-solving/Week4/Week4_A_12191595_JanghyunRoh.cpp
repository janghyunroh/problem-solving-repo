/*	input
30
34
CCDCCCDDCDDDDCCDCCDDCCDCCCCCCDCDCC
2
DC
9
CCCDDCCDD
45
DCDCCCDDDCCCCDCCDDCCDDCCCCCCCCDDCDCCCCDDCDCDD
22
DCDDDDDDDCCDDCDDCCDCCD
46
DCCCDDDCDDCDDDDCCCDDDDCCCCDDCCDCDDCDDCCDDCDCCC
11
DCCDCCDCDCC
16
CDDCCCDDDDDCCCDC
3
DCC
34
DDCDCCCCDCDDDCDDCCCCDCDCDCCCDDDCDC
31
CCDDDDDCCCCDCCDDDCDCDDDCCCDDDCC
2
DC
1
D
43
DCDDCCDCCDDCCCDCCDCDCDDCDCDDDCDCDDDDCCDCCDD
39
CCCDCCDDDCDCDDDDCDCCCCDDCDCDDDDCCCDCCCC
48
DDDCCDDDCCCDCDCCCCDDCCDDCDDDDDCDCDDCDCDDDCDDDDCD
19
DDCDCCDCDCDDCCCCDDD
1
D
26
CDCDDCCCDCCDDCCDDDDCDCCCCD
19
CDCDDCCCCDDCDDDDCCD
23
CCDCCDDDDDCCDCCCCCCCCCD
27
DDDDCDCCDCDCCDCCCCDDDCCCCDC
20
DDCCDCCDCDDCDCDDDDCC
41
CCDCDDCDDCCCCDCDDDDDDCCCCCDCCCDCDDCDCCCDC
45
DDDDCCCCDDCDCDCDDCCCCDCCDDCDDDDDDCCCDDDDDDDDC
10
CDCCCDDCCC
7
CCDDDDC
9
CCDDCCCCC
14
CCDCCDDDDDCDCD
41
CDDDCCCDDDCDDDCCCCCCCCCDDDDCCCCCDDCDDCCDD

*/

/*	output
113
0
4
230
35
224
11
29
0
139
118
0
0
200
170
223
45
0
84
36
43
58
49
186
196
9
4
4
15
208


*/





#include <iostream>

using namespace std;

int T, N;
char* arr;

long long cntLeft() {
	long long cnt = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == 'D') {
			int curI = i;
			for (int j = i; j < N; j++) {
				if (arr[j] == 'C') {
					cnt += (j - curI);

					//cout << "current cnt : " << cnt << "\n";
					curI++;
				}
			}
			break;
		}
	}
	return cnt;
}

long long cntRight() {
	long long cnt = 0;
	for (int i = N - 1; i >= 0; i--) {
		if (arr[i] == 'D') {
			int curI = i;
			for (int j = i; j >= 0; j--) {
				if (arr[j] == 'C') {
					cnt += (curI - j);

					//cout << "current cnt : " << cnt << "\n";
					curI--;
				}
			}
			break;
		}
		
	}
	return cnt;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> T;
	while (T--) {
		cin >> N;
		arr = new char[N+1];
		int fhcnt = 0, shcnt = 0;
		int cnt = 0;
		
		for (int i = 0; i < N; i++) {
			cin >> arr[i];
		}

		//�������� ���Ƴִ� �۾�
		long long l = cntLeft();
		long long r = cntRight();

		cout << ( l > r ? r : l ) << "\n";	
	}
}