#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int, int> p_ii;
int rec[1001] = {0,};
vector<vector<int>> reverse;
vector<vector<int>> straight;
queue<p_ii> q;
int N, M; 

void bfs(){

    for (int i=1; i<=N; i++){
        if (reverse[i].size()==0){
            q.push(make_pair(i,1)); // pair num, semester
        }
    }
    while(!q.empty()){
        p_ii curr = q.front();
        for (int neighbor: straight[curr.first]){
            q.push(make_pair(neighbor, curr.second+1));
        }
        rec[curr.first] = curr.second;
        q.pop();
    }
}


int main(){
    cin>>N; cin>>M;
    for (int i=0; i<=N; i++){
        vector<int> tmp;
        reverse.push_back(tmp);
        straight.push_back(tmp);
    }

    for (int i=0; i<M; i++){
        int a, b;cin>>a;cin>>b;
        reverse[b].push_back(a);
        straight[a].push_back(b);
    }

    bfs();

    for (int i=1; i<=N; i++){
        if (rec[i]==0) cout<<1;
        else cout<<rec[i];
        cout<<" ";
    }


    return 0;
}