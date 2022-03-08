//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//#define INF 2147483647
//using namespace std;
//
//struct cmp {
//    bool operator()(pair<int, int> a, pair<int, int> b) {
//        return a.second>b.second;
//    }
//};
//
//vector<pair<int, int>> vec[1001];
//int dist[1001][1001];
//int N, M, X;
//
//bool vecCmp(pair<int, int> a, pair<int, int> b) {
//    if (a.second<b.second) return true;
//    return false;
//}
//void dijkstra(int start) {
//
//    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
//
//    for (int i = 1; i<=N; i++) dist[start][i] = INF;
//    pq.push(pair<int, int>(start, 0));
//    dist[start][start] = 0;
//
//    while (!pq.empty()) {
//        int curr = pq.top().first;
//        int cost = pq.top().second;
//        pq.pop();
//
//        for (pair<int, int> v : vec[curr]) {
//            int addedCost = cost+v.second;
//            if (addedCost<dist[start][v.first]) {
//                dist[start][v.first] = addedCost;
//                pq.push(pair<int, int>(v.first, addedCost));
//            }
//        }
//    }
//}
//
//int main() {
//    cin>>N>>M>>X;
//    for (int i=0; i<M; i++){
//        int u, v, w;
//        cin>>u>>v>>w;
//        vec[u].push_back(pair<int,int>(v,w));
//    }
//    for (int i=1;i<=N;i++) {
//        sort(vec[i].begin(), vec[i].end(), vecCmp);
//        dijkstra(i);
//    }
//
//    int maxV=0;
//    for (int i=1; i<=N; i++) {
//        if (dist[i][X]+dist[X][i]>maxV) maxV = dist[i][X]+dist[X][i];
//    }
//    cout<<maxV;
//
//    return 0;
//}