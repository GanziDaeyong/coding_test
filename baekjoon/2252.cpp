//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#include <unordered_set>
//
//typedef int VERTEX;
//using namespace std;
//int N, M;
//queue<VERTEX> q;
//vector<vector<VERTEX>> neighbor;
//vector<VERTEX> vt;
//int indeg[32001] = {0,};
//
//
//int main() {
//    cin >> N >> M;
//    vt.reserve(N);
//    neighbor.reserve(N);
//    for (int i = 0; i <= N; i++) neighbor.push_back(vector<VERTEX>(0));
//    for (int i = 0; i < M; i++) {
//        int small, big;
//        cin >> small >> big;
//        vt.push_back(small);
//        vt.push_back(big);
//        indeg[big]++;
//        neighbor[small].push_back(big);
//    }
//    sort(vt.begin(), vt.end());
//    vt.erase(unique(vt.begin(),vt.end()),vt.end());
//    for (int i = 1; i <= N; i++) {
//        if (indeg[i] == 0) q.push(i);
//    }
//    while (!(q.empty())) {
//        VERTEX v = q.front();
//        for (VERTEX big_neighbor: neighbor[v]) {
//            indeg[big_neighbor]--;
//            if (indeg[big_neighbor]==0) {
//                q.push(big_neighbor);
//            }
//        }
//        cout<<v<<" ";
//        q.pop();
//    }
//    return 0;
//}