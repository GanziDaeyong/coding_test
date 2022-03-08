//#include <iostream>
//#include <queue>
//#include <unordered_set>
//using namespace std;
//int N, M;
//
//int zeroForGoodToLie[51] = {0,};
//unordered_set<int> s[51];
//queue<int> q;
//
//int main(){
//    int k;
//    cin>>N>>M;
//    cin>>k;
//    for (int i=1; i<=k; i++) { int v; cin>>v; q.push(v); }
//    for (int i=1; i<=M; i++) {
//        int num;
//        cin>>num;
//        for (int j=0; j<num; j++){ int v; cin>>v; s[i].insert(v); }
//    }
//
//    while (!q.empty()) {
//
//        int v = q.front();
//        q.pop();
//        for (int i=1; i<=M; i++) {
//            if (s[i].find(v)!=s[i].end() && zeroForGoodToLie[i]==0) {
//                for(int toEnqueue : s[i]) {
//                    if (toEnqueue!=v) q.push(toEnqueue);
//                }
//                zeroForGoodToLie[i]=1;
//            }
//        }
//    }
//
//    int cnt=0;
//    for (int i=1; i<=M; i++) if (zeroForGoodToLie[i]==0) cnt++;
//
//    cout<<cnt;
//
//    return 0;
//
//}