//#include <iostream>
//
//using namespace std;
//int N, K;
//int coin[10] {0,};
//int coinCnt=0;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N >> K;
//    for (int i = 0; i < N; i++) cin >> coin[i];
//
//    for (int i=N-1; i>=0; i--) {
//        if (coin[i]<=K) {
//            int eachCoinNum = K/coin[i];
//            coinCnt+=eachCoinNum;
//            K-=eachCoinNum*coin[i];
//            if (K==0) break;
//        }
//    }
//    cout<<coinCnt;
//    return 0;
//}