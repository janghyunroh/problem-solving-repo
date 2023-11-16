//#include <iostream>
//
//int main() {
//
//	int n, m, k, w;
//	int *f, *d, *D;
//	std::cin >> n >> m >> k;
//	f = (int *)malloc(sizeof(int) * k);
//	d = (int *)malloc(sizeof(int) * k);
//	D = (int *)malloc(sizeof(int) * (k + 1));
//	D[k] = 100000;
//	w = k;
//	for(int i = 0; i < k; i++) {
//		std::cin >> f[i] >> d[i];
//		D[i] = m + 1 - d[i] + f[i];
//	}
//	for (int i = k - 1; i >= 0; i--)
//		w = D[i] <= D[w] ? i : w;
//	
//	printf("%d", w + 1);
//		
//
//	free(f);
//	free(d);
//	free(D);
//	return 0;
//}