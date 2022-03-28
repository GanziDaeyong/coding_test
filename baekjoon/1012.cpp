//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//#define PRINT(x) cout<<x<<"\n"
//#define PR pair<int,int>
//using namespace std;
//
//int T, M, N, K;
//int visited[50][50]={0,};
//int champ[50][50]={0,};
//
//
//void clr(){
//    for (int i=0; i<M; i++) {
//        for (int j=0; j<N; j++) {
//            visited[i][j] = 0;
//            champ[i][j] = 0;
//        }
//    }
//
//}
//
//vector<PR> GetNeighbor(int i, int j){
//    vector<PR> tmp;
//    if (i>0 && champ[i-1][j]==1 && !visited[i-1][j]) {
//        tmp.push_back(make_pair(i-1,j));
//    }
//    if (i<M-1 && champ[i+1][j]==1 && !visited[i+1][j]) {
//        tmp.push_back(make_pair(i+1,j));
//    }
//    if (j>0 && champ[i][j-1]==1 && !visited[i][j-1]) {
//        tmp.push_back(make_pair(i,j-1));
//    }
//    if (j<N-1 && champ[i][j+1]==1 && !visited[i][j+1]) {
//        tmp.push_back(make_pair(i,j+1));
//    }
//    return tmp;
//}
//
//
//void bfs_pair(int i, int j){
//
//    queue<PR> q;
//    vector<PR> amis = GetNeighbor(i,j);
//
//    for (PR ami: amis) {
//        q.push(ami);
//        visited[ami.first][ami.second] = true;
//    }
//    while(!q.empty()) {
//        PR curr = q.front();
//        q.pop();
//        vector<PR> curramis = GetNeighbor(curr.first, curr.second);
//        for (PR ami: curramis) {
//            q.push(ami);
//            visited[ami.first][ami.second] = true;
//        }
//    }
//}
//
//int main() {
//    cin>>T;
//    for (int i=0; i<T; i++) {
//        cin>>M>>N>>K;
//        int cnt =0;
//        for (int j=0; j<K; j++) {
//            int x,y;
//            cin>>x>>y;
//            champ[x][y] = 1;
//        }
//        for (int x=0; x<M; x++) {
//            for (int y=0; y<N; y++) {
//                if (!visited[x][y] && champ[x][y]==1) {
//                    visited[x][y]=true;
//                    cnt++;
//                    bfs_pair(x,y);
//                }
//            }
//        }
//        cout<<cnt<<"\n";
//        clr();
//    }
//
//    return 0;
//}