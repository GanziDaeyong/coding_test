#include <string>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int visited[20001] = {0,};
map<int, vector<int>> m;
queue<pair<int, int>> q; // nodenum, edgecount

void bfs(){
    
    q.push(make_pair(1,0));
    visited[1]=-1;
    while(!q.empty()){
        int node = q.front().first;
        int edgecnt = q.front().second;
        
        for (int neighbor: m[node]){
            if (visited[neighbor]==0){
                q.push(make_pair(neighbor, edgecnt+1));
                visited[neighbor]=edgecnt+1;
            }
        }
        q.pop();
        
    }
    
    
}

int solution(int n, vector<vector<int>> edge) {

    for (int i=1; i<=n; i++){
        vector<int> tmp;
        m[i]=tmp;
    }
    
    for (vector<int> v : edge){
        m[v[0]].push_back(v[1]);   
        m[v[1]].push_back(v[0]);
    }
    
    bfs();
    
    int maxCnt = 0;
    int maxV = 0;
    for (int i=1; i<=n; i++){
        if (visited[i]>maxV){
            maxV=visited[i];
        }
    }
    for (int i=1; i<=n; i++){
        if (visited[i]==maxV) maxCnt+=1;
    }
    
    int answer = maxCnt;
    return answer;
}
