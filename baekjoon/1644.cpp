//#include <iostream>
//#include <cmath>
//
//#define PRIME 0
//#define COMPOSITE 1
//using namespace std;
//
//int N;
//int zeroForPrime[4000001] = {COMPOSITE, COMPOSITE,};
//
//int main(){
//    cin>>N;
//
//    for (int i=2; i<=sqrt(N); i++) {
//        if (zeroForPrime[i]==PRIME){
//            for (int j=i*2; j<=N; j+=i) {
//                zeroForPrime[j]=COMPOSITE;
//            }
//        }
//    }
//
//    int cnt=0;
//
//    for (int i=2; i<=N; i++) {
//        if (zeroForPrime[i]==PRIME) {
//            int partSum=0;
//            for (int j=i; j<=N; j++) {
//                if (zeroForPrime[j]==PRIME) partSum+=j;
//                if (partSum==N) {cnt++; break; }
//                if (partSum>N) break;
//            }
//        }
//    }
//
//    cout<<cnt;
//
//    return 0;
//}