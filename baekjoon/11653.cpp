//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int zeroForPrime[10000000] = {1, 1,};
//int M, N;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
//
//    for (int i = 2; i <= sqrt(N); i++) {
//        for (int j = i * 2; j <= N; j += i) {
//            zeroForPrime[j] = 1;
//        }
//    }
//
//    int i=2;
//    while (i<=N) {
//        if (zeroForPrime[i]==0 && N%i==0) {
//                N/=i;
//                cout<<i<<"\n";
//                continue;
//        }
//        i++;
//    }
//    return 0;
//}