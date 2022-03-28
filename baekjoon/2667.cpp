//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//#define PRINT(x) cout<<x<<"\n"
//#define PR pair<int,int>
//using namespace std;
//
//vector<int> res;
//int carte[26][26]={0,};
//bool visited[26][26]={0,};
//int N;
//
//
//vector<PR> GetNeighbor(int i, int j){
//    vector<PR> tmp;
//    if (carte[i-1][j]==1 && !visited[i-1][j]) {
//        tmp.push_back(make_pair(i-1,j));
//    }
//    if (i<25 && carte[i+1][j]==1 && !visited[i+1][j]) {
//        tmp.push_back(make_pair(i+1,j));
//    }
//    if (carte[i][j-1]==1 && !visited[i][j-1]) {
//        tmp.push_back(make_pair(i,j-1));
//    }
//    if (j<25 && carte[i][j+1]==1 && !visited[i][j+1]) {
//        tmp.push_back(make_pair(i,j+1));
//    }
//    return tmp;
//}
//
//
//void bfs_pair(int i, int j){
//
//    // cout<<"i,j = {"<<i<<" "<<j<<"}\n";
//
//    int cnt=1;
//
//    queue<PR> q;
//    vector<PR> amis = GetNeighbor(i,j);
//
//
//    for (PR ami: amis) {
//        q.push(ami);
//        cnt++;
//        visited[ami.first][ami.second] = true;
//    }
//    while(!q.empty()) {
//        PR curr = q.front();
//        q.pop();
//        vector<PR> curramis = GetNeighbor(curr.first, curr.second);
//        for (PR ami: curramis) {
//            q.push(ami);
//            cnt++;
//            visited[ami.first][ami.second] = true;
//        }
//    }
//    res.push_back(cnt);
//}
//
//
//int main() {
//    cin>>N;
//
//    for (int i=1; i<=N; i++) {
//        for (int j=1; j<=N; j++){
//            char tmp;
//            cin>>tmp;
//            carte[i][j] = tmp=='1' ? 1:0;
//        }
//    }
//
//
//    for (int i=1; i<=N; i++) {
//        for (int j=1; j<=N; j++){
//            if((!visited[i][j]) && (carte[i][j]==1)) {
//                visited[i][j]=1;
//                bfs_pair(i,j);
//            }
//        }
//    }
//
//    cout<<res.size()<<"\n";
//    sort(res.begin(), res.end());
//    for (int v : res) {
//        cout<<v<<"\n";
//    }
//
//    return 0;
//}