#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

#define PRINT(x) cout<<x<<"\n"

using namespace std;


vector<int> neighbor[101];
bool visited[101]={0,};
int N, M;


void bfs(){
    queue<int> q;
    visited[1]=true;
    for(int ami: neighbor[1]){
        q.push(ami);
        visited[ami]=true;
    }
    while(!q.empty()){
        int curr = q.front();
        q.pop();
        for (int ami:neighbor[curr]){
            if(!visited[ami]) {
                q.push(ami);
                visited[ami]=true;
            }
        }
    }
}


int main() {
    cin>>N>>M;
    for (int i=0; i<M; i++) {
        int a, b;
        cin>>a>>b;
        neighbor[a].push_back(b);
        neighbor[b].push_back(a);
    }
    bfs();
    int cnt=0;
    for (int i=2; i<=N; i++){
        if (visited[i]) cnt++;
    }
    cout<<cnt;
    return 0;
}