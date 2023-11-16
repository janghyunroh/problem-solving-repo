//#include <iostream>
//
//using namespace std;
//
///**
// * K개의 랜선의 각 길이 = arr[K]
// * 
// * K개의 랜선을 각각 L에 해당하는 길이만큼 조각내어 만든 총 개수는 n개.
// * arr[0] 을 L짜리로 분해해서 나온 개수 a => a = arr[0] / L
// * arr[1] 을 L짜리로 분해해서 나온 개수 b => b = arr[1] / L
// * arr[2] 을 L짜리로 분해해서 나온 개수 c => c = arr[2] / L
// * .
// * .
// * .
// * n = a + b + c + . . . = sum(arr[i] / L)
// * 
// * L이 클수록 n이 작아지고 
// * L이 작을수록 n이 커짐
// * 
// * 목표값이 N에 대해 n >= N이고 L이 최대이므로 
// * n >= N을 만족하는 선에서 L값을 늘려나가야 함(n을 줄여나감)
// * 
// * 시간 제한 때문에 순차탐색으로 안됨(정수값을 1씩 늘려나가는 건 너무 느림)
// * L에 대한 이진 탐색으로 진행
// * */
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    //basic input
//    int K, N;
//
//    cin >> K >> N;
//    unsigned* arr = new unsigned[K];
//    
//    //len input (max 설정)
//    int max = 0;
//    for(int i=0;i<K;i++) {
//        
//        cin >> arr[i];
//        
//        //이진 탐색 위한 작업
//        if(max < arr[i]) max = arr[i];
//        
//    }
//    
//    //L에 대한 이진 탐색
//    unsigned L, l = 1, r = max;
//    
//    //이진 탐색
//    
//    //반례) 최대 길이가 1인 경우(모든 랜선이 1인 경우) (l==1 이고 r==1)
//    // l != r에 걸리므로 루프를 돌지 않아 L값이 아예 초기화가 못됨(0으로 출력)
//    if(l==r) {
//        cout << 1;
//        return 0;
//    }
//    
//    //avg case
//    while(l != r) { //조건에 부합하면서 L이 최대가 되는 경우(좌한과 우한이 같은 경우) -> loop 탈출
//        L = (l + r + 1) / 2;  //mid = upper((L+R)/2)
//        
//        //n 구하기
//        unsigned n = 0;
//        for(int i = 0; i < K && n < N; ++i) {
//            n += (arr[i] / L);
//        }
//        
//        //구한 n으로 조건 확인
//        if(n < N)  r = L - 1;   //조건에 부적합한 경우(=만족하지 못하므로 우한을 줄임)
//        else l = L;             //조건에 부합한 경우(=만족하므로 좌한을 늘려봄)
//            
//        
//    }
//    
//    cout << l;
//    
//}