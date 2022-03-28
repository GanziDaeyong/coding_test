//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//typedef pair<int, int> p_ii;
//int V, E;
//int visited[10001] = {0,};
//vector<p_ii> m[10001];
//
//struct dycomp{
//    bool operator()(p_ii a, p_ii b) {
//        return a.second > b.second;
//    }
//};
//
//int main(){
//    cin>>V;
//    cin>>E;
//
//    for (int i=1; i<=V; i++){
//        vector<p_ii> tmp;
//        m[i] = tmp;
//    }
//
//    for (int i=0; i<E; i++){
//        int a, b, w;
//        cin>>a>>b>>w;
//        m[a].push_back(make_pair(b, w));
//        m[b].push_back(make_pair(a, w));
//    }
//
//    priority_queue<p_ii, vector<p_ii>, dycomp> pq;
//    for (p_ii p : m[1]) pq.push(p);
//    visited[1] = 1;
//
//    int total =0;
//    while(!pq.empty()){
//        p_ii curr = pq.top();
//        if (visited[curr.first]) {
//            pq.pop();
//            continue;
//        }
//        total += curr.second;
//        visited[curr.first] = 1;
//        pq.pop();
//        for (p_ii neighbor : m[curr.first]) pq.push(neighbor);
//    }
//
//    cout<<total;
//
//    return 0;
//}
//
