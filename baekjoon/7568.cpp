//#include <iostream>
//using namespace std;
//
//int smallerThan[50];
//int bf[50][2];
//int N;
//
//int main() {
//
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    cin>>N;
//    for (int i=0; i<N; i++) cin>>bf[i][0]>>bf[i][1];
//
//    for (int i=0; i<N; i++){
//        int cnt=0;
//        for (int j=0; j<N; j++) {
//            if (i==j) continue;
//            if (bf[i][0]<bf[j][0] && bf[i][1]<bf[j][1]) cnt++;
//        }
//        smallerThan[i]=cnt;
//    }
//    for (int i=0; i<N; i++) cout << smallerThan[i]+1 << " ";
//    return 0;
//}