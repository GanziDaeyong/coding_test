#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
#define MAX 100000 
#define NOROUTE 200000
vector<pair<int,int>> roads;
int map[501][501] = {0,};
int d[501] = {0,};
int N, M, W;


void solve(){

    for (int i=1; i<=N-1; i++) {
        for (pair<int, int> road: roads){
            int u = road.first;
            int v = road.second;
            if (d[u] + map[u][v] < d[v]) {
                d[v] = d[u] + map[u][v];
            }
        }
    }
    for (pair<int, int> road: roads) {
        int u = road.first;
        int v = road.second;
        if (d[u] + map[u][v] < d[v]) {
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

void init(){
    fill(&map[0][0], &map[500][501], NOROUTE);
    fill_n(d, 501, MAX);
    roads.clear();
}


int main(){


    int TC; cin>>TC;
    for (int i=0; i<TC; i++) {
        init();
        cin>>N; cin>>M; cin>>W;
        for (int j=0; j<M; j++) {
            int S, E, T; cin>>S; cin>>E; cin>>T;
            if ( (map[S][E]==NOROUTE) || (map[S][E]!=NOROUTE && map[S][E]>T)){
                map[S][E] = T;
                map[E][S] = T;
                roads.push_back(make_pair(S,E));
                roads.push_back(make_pair(E,S));
            }
        }
        for (int k=0; k<W; k++) {
            int S, E, T; cin>>S; cin>>E; cin>>T;
            map[S][E] = T*(-1);
            roads.push_back(make_pair(S,E));
        }
        
        solve();

    }

return 0;
}