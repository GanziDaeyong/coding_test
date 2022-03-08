//#include <iostream>
//#include <vector>
//#include <queue>
//
//#define INF 3000001
//
//using namespace std;
//
//
//struct cmp {
//    bool operator()(pair<int, int> a, pair<int, int> b) {
//        return a.second>b.second;
//    }
//};
//
//priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
//vector<pair<int, int>> vec[20001];
//int dist[20001];
//int V, E, initial;
//
//void dijkstra() {
//    for (int i = 1; i<=V; i++) dist[i] = INF;
//
//    pq.push(pair<int, int>(initial, 0));
//    dist[initial] = 0;
//
//
//    while (!pq.empty()) {
//        int cost = pq.top().second;
//        int curr = pq.top().first;
//        pq.pop();
//
//        for (pair<int, int> v : vec[curr]) {
//            int eachCost = cost+v.second;
//            if (eachCost<dist[v.first]) {
//                dist[v.first] = eachCost;
//                pq.push(pair<int, int>(v.first, eachCost));
//            }
//        }
//    }
//}
//int main() {
//    cin>>V>>E;
//    cin>>initial;
//    for (int i = 0; i<E; i++) {
//        int u, v, w;
//        cin>>u>>v>>w;
//        vec[u].push_back(pair<int, int>(v, w));
//    }
//    dijkstra();
//
//    for (int i = 1; i<=V; i++) {
//        if (dist[i]==INF) cout<<"INF\n";
//        else cout<<dist[i]<<"\n";
//    }
//    return 0;
//}