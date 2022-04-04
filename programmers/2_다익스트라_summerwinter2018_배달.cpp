#include <iostream>
#include <vector>
#include <map>
#include <queue>
# define INF 999999  

using namespace std;
typedef pair<int, int> pii;
vector<pii> m[51];
int dij[51];
int kk;


struct dycomp{
    bool operator()(pii a, pii b){
        return a.second>b.second;
    }
};

void dijkstra(){
    priority_queue<pii, vector<pii>, dycomp> pq;
    pq.push(make_pair(1,0));
    dij[1] =0;
    
    while(!pq.empty()){
        pii curr= pq.top();
        int currnode = curr.first;
        int currdist = curr.second;
        pq.pop();
        if (dij[currnode] < currdist || currdist > kk) continue;
        for (pii neighbor : m[currnode]){
            int nextnode = neighbor.first;
            int nextdist = neighbor.second + currdist;
            if (nextdist < dij[nextnode] && nextdist <= kk){
                dij[nextnode] = nextdist;
                pq.push(make_pair(nextnode, nextdist));
            }
        }
    }
    
}

int solution(int N, vector<vector<int>> road, int K) {
    kk = K;
    for (int i=0; i<=N; i++) {
        vector<pii> tmp;
        m[i] = tmp;
        dij[i]=INF;
    }
    
    for (vector<int> r : road){
        m[r[0]].push_back(make_pair(r[1],r[2]));
        m[r[1]].push_back(make_pair(r[0],r[2]));                          
    }
    
    dijkstra();
    
    int cnt = 0;
    for (int i=1; i<=N; i++){
        if (dij[i]<=kk) cnt+=1; 
    }

    return cnt;
}