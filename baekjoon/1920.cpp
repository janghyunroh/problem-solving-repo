//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int binarySearch(int N, int* nums, int i, int j) {
//    if(i > j) return 0;
//    
//    int k = (i + j) / 2; 
//    
//    if(nums[k] == N) return 1;
//    else if(N < nums[k]) return binarySearch(N, nums, i, k-1);
//    else if(N > nums[k]) return binarySearch(N, nums, k+1, j);
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    int N, M;
//    cin >> N;
//    int* nums = new int[N];
//    for(int i = 0; i < N; i++) cin >> nums[i];
//    cin >> M;
//    sort(nums, nums+N);
//    
//    for(int i = 0; i < M; i++) {
//        int j;
//        cin >> j;
//        cout << binarySearch(j, nums, 0, N-1) << "\n";
//    }
//    
//    return 0;
//}