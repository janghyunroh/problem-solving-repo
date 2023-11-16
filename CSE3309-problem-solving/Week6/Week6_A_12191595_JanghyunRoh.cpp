//간단한 카드게임

/**
 * 더 높은 숫자 카드를 낸 사람이 승리
 * 
 * 플레이어 A와 B가 숫자 카드를 한장씩 냈을 때,
 * A가 더 높으면 A가 1점
 * 둘의 숫자가 같아도 A가 1점
 * B가 더 높으면 B가 1점 획득
 * 
 * 카드는 각각 1부터 N까지의 정수가 적혀 있는 카드 덱 2개를 각자 나눠가져 진행
 * N장의 카드를 모두 쓸 때까지 N번의 게임을 진행
 * 
 * 처음 M번(M<=N)의 게임 동안 A와 B가 뽑은 카드에 대한 정보가 주어짐
 * 
 * 주어진 정보를 기반으로 남은 (N-M)번의 게임에서 A가 역전할 수 있는지 판단
 * 
 * 
 * 
*/
#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int T, N, M;
bool *aUsedCards;
bool *bUsedCards;



int main() {
    cin >> T;
    while(T--) {

        int aScore = 0;
        int bScore = 0;

        //
        cin >> N >> M;
        aUsedCards = new bool[N+1]{false, };
        bUsedCards = new bool[N+1]{false, };

        //
        int a, b;
        for(int i=0;i<M;i++) {
            cin >> a >> b;
            if(a>=b) aScore++;
            else bScore++;
            aUsedCards[a] = true;
            bUsedCards[b] = true;
        }

        deque<int> aCards;
        deque<int> bCards;
        for(int i = 1; i <= N; i++) {
            if(!aUsedCards[i]) aCards.push_back(i);
            if(!bUsedCards[i]) bCards.push_back(i);
        }

        while(!aCards.empty()) {
            if(aCards.front() >= bCards.front()) {
                aScore++;
                aCards.pop_front();
                bCards.pop_front();
            }
            else {
                bScore++;
                aCards.pop_front();
                bCards.pop_back();
            }
        }

        cout << ( (aScore > bScore) ? 1 : 0 )<< "\n";
    }
    return 0;
}

