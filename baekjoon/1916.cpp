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
//priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
//vector<pair<int, int>> vec[1001];
//int dist[1001];
//int N, M, start, goal;
//
//bool vecCmp(pair<int, int> a, pair<int, int> b) {
//    if (a.second<b.second) return true;
//    return false;
//}
//void dijkstra() {
//    for (int i = 1; i<=N; i++) dist[i] = INF;
//    pq.push(pair<int, int>(start, 0));
//    dist[start] = 0;
//
//    while (!pq.empty()) {
//        int curr = pq.top().first;
//        int cost = pq.top().second;
//        pq.pop();
//
//        for (pair<int, int> v : vec[curr]) {
//            int addedCost = cost+v.second;
//            if (addedCost<dist[v.first]) {
//                dist[v.first] = addedCost;
//                pq.push(pair<int, int>(v.first, addedCost));
//            }
//        }
//    }
//}
//
//int main() {
//
//    cin>>N>>M;
//    for (int i=0; i<M; i++){
//        int u, v, w;
//        cin>>u>>v>>w;
//        vec[u].push_back(pair<int,int>(v,w));
//    }
//    for (int i=1;i<=N;i++) {sort(vec[i].begin(), vec[i].end(), vecCmp);}
//
//    cin>>start>>goal;
//    dijkstra();
//    cout<<dist[goal];
//    return 0;
//}