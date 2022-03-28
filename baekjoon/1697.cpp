//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//#define PRINT(x) cout<<x<<"\n"
//#define LB cout<<"\n"
//using namespace std;
//
//int N, K;
//int Dist[100001] = {0,};
//queue<int> q;
//
//void Push(int next, int nextTime){
//    q.push(next);
//    if (Dist[next]==0 || Dist[next]>nextTime) Dist[next] = nextTime;
//}
//
//void Bfs(int st){
//
//    q.push(st);
//
//    while(!q.empty()) {
//        int curr = q.front();
//        q.pop();
//
//        int nextTime = Dist[curr]+1;
//
//        int a = curr+1;
//        int b = curr-1;
//        int c = curr*2;
//
//
//
//        if (a==K || b==K || c==K) {
//            Dist[K]=nextTime;
//            break;
//        }
//
//        if (a<=100000 && Dist[a]==0 && curr<K) {
//            Push(a, nextTime);
//        }
//        if (b>=0 && Dist[b]==0){
//            Push(b, nextTime);
//        }
//        if (c!=0 && c<=100000 && Dist[c]==0 && curr<K) {
//            Push(c, nextTime);
//        }
//    }
//    return;
//}
//
//
//
//int main() {
//    cin>>N>>K;
//
//    if (K<=N) {
//        cout<<N-K;
//        return 0;
//    }
//
//    Bfs(N);
//
//    cout<<Dist[K];
//
//    return 0;
//}