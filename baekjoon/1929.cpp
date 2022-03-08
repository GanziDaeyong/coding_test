//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int zeroForPrime[1000001] = {1,1,};
//int M, N;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> M >> N;
//
//    for (int i = 2; i <= sqrt(N); i++) {
//        for (int j = i * 2; j <= N; j += i) {
//            zeroForPrime[j] = 1;
//        }
//    }
//
//    for (int i = M; i <= N; i++) { if (zeroForPrime[i] == 0) cout << i << "\n"; }
//    return 0;
//}