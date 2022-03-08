#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <unordered_set>
using namespace std;


unordered_set<int> check;
vector<pair<int, int>> map[20001];



int bfs(int node){

    int visited[20001]={0,};
    int dp[20001] = {0,};

    int total =0;
    queue<pair<int, int>> q;
    visited[node]=1;

    for (pair<int,int> v : map[node]) {
        q.push(v); visited[v.first]=1;
        dp[v.first]=v.second;
        total += dp[v.first];
    }
    // cout<<total;
    while(!q.empty()){
        pair<int,int> curr = q.front();
        q.pop();
        for (pair<int,int> adj : map[curr.first]) {
            if (visited[adj.first]==0){
                q.push(adj); visited[adj.first]=1;
                dp[adj.first]=adj.second+dp[curr.first];
                total += (dp[adj.first]);
            }
           
        }
    }
    // cout<<total;
    return total;
}

void solve(int i){

    vector<int> score;
    int dup=0;


    // for (auto itr = check.begin(); itr != check.end(); ++itr) {
    //     if(map[*itr].size()>=2) bfs(*itr);
    // }

    for (auto itr = check.begin(); itr != check.end(); ++itr) {
        if (map[*itr].size()>=2){
            score.push_back(bfs(*itr));
        }
    }
    sort(score.begin(), score.end());
    for (int val: score){
        if (val == score[0]){
            dup++;
        }
    }
    cout<<"#"<<i+1<<" "<<dup<<" "<<score[0]<<"\n";
    score.clear();

    for (auto itr = check.begin(); itr != check.end(); ++itr) {
            map[*itr].clear();
    }

}

int main(){
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T; cin>>T;
    for (int i=0; i<T; i++){
        int N; cin>>N;
        for (int j=0; j<N-1; j++) {
            int A, B, C; cin>>A; cin>>B; cin>>C;
            check.insert(A); check.insert(B);
            map[A].push_back(make_pair(B,C));
            map[B].push_back(make_pair(A,C));
        }
        solve(i);
        check.clear();
        break;
    }
    
    return 0;
}