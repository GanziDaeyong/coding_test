//#include <iostream>
//#include <vector>
//
//#define UNVISITED 0
//#define VISITED 1
//using namespace std;
//vector<pair<int, int>> vec[10001];
//int n;
//int rootNode = 0;
//int distTmp = 0;
//int dist1Max = 0;
//int dist2Max = 0;
//int visited[100001] = {0,};
//
//void initsetting() {
//    for (int i = 0; i<=n; i++) visited[i] = 0;
//    distTmp = 0;
//}
//
//void dfs(int node, int oneForFirstTry) {
//    if (vec[node].size()==1&&node!=rootNode) {
//        if (oneForFirstTry==1) {
//            if (distTmp>dist1Max) {
//                dist1Max = distTmp;
//                rootNode = node;
//            }
//        } else if (oneForFirstTry==2) {
//            if (distTmp>dist2Max) {
//                dist2Max = distTmp;
//                rootNode = node;
//            }
//        }
//        return;
//    }
//
//    for (int i = 0; i<vec[node].size(); i++) {
//        pair<int, int> tmpPair = vec[node][i];
//        if (visited[tmpPair.first]==UNVISITED) {
//            visited[tmpPair.first] = VISITED;
//            distTmp += tmpPair.second;
//            dfs(tmpPair.first, oneForFirstTry);
//            distTmp -= tmpPair.second; //?
//            visited[tmpPair.first] = UNVISITED;
//        }
//    }
//}
//
//
//int main() {
//    cin>>n;
//    for (int i = 1; i<=n-1; i++) {
//        int node, fr, dist;
//        cin>>node>>fr>>dist;
//        vec[node].push_back(pair<int, int>(fr, dist));
//        vec[fr].push_back(pair<int,int>(node,dist));
//    }
//    rootNode = 1;
//    visited[rootNode] = 1;
//    dfs(1, 1);
//    initsetting();
//    visited[rootNode] = 1;
//    dfs(rootNode,2);
//    cout<<dist2Max;
//    return 0;
//}