//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//
////int main() {
////    ios_base::sync_with_stdio(false);
////    cin.tie(NULL);
////    cout.tie(NULL);
////    int N;
////    cin >> N;
////    int* inputArr = new int[N];
////    int* outputArr = new int[N];
////
////    for (int i=0; i<N; i++) cin>>inputArr[i];
////    int max = *max_element(inputArr, inputArr+N);
////
////    int* cntArr = new int[max+1];
////    for (int i=0; i<=max; i++) cntArr[i]=0;
////    for (int i=0; i<N; i++) cntArr[inputArr[i]]++;
////    for (int i=1; i<=max; i++) cntArr[i] = cntArr[i]+cntArr[i-1];
////    for (int i=N-1; i>=0; i--) {
////        outputArr[cntArr[inputArr[i]]] = inputArr[i];
////        cntArr[inputArr[i]]--;
////    }
////    for (int i=1; i<=N; i++) cout<<outputArr[i]<<"\n";
////    return 0;
////}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int N;
//    cin >> N;
//    int cnt[10001] = {0,};
//    for (int i=0; i<N; i++) {
//        int num;
//        cin>>num;
//        cnt[num]++;
//    }
//    int printed = 0;
//    for (int i=0; i<10001; i++) {
//        if (printed==N) break;
//        if (cnt[i]!=0) {
//            for (int j=0; j<cnt[i]; j++) {
//                cout<<i<<"\n";
//                printed++;
//            }
//        }
//    }
//    return 0;
//}