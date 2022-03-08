//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//#define VISITED 1
//#define UNVISITED 0
//using namespace std;
//
//vector<vector<int>> friends (100001, vector<int>(0,0));
//int parent[100001] = {0,};
//int visited[100001] = {0,};
//int N;
//
//void dfs(int node){
//    if (friends[node].size()==1 && node!=1) {
//        return;
//    }
//    for (int v : friends[node]) {
//        if (visited[v]==UNVISITED) {
//            visited[v]=VISITED;
//            parent[v]=node;
//            dfs(v);
//            visited[v]=UNVISITED;
//        }
//    }
//}
//
//
//int main(){
//    cin >> N;
//    for (int i=0; i<N-1; i++) {
//        int a, b;
//        cin>>a>>b;
//        friends[a].push_back(b);
//        friends[b].push_back(a);
//    }
//    dfs(1);
//    for (int i=2; i<100001; i++) {
//        if (parent[i]!=0) cout<<parent[i]<<"\n";
//    }
//    return 0;
//}