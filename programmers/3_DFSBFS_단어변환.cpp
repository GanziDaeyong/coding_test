#include <string>
#include <vector>
#include <queue>
using namespace std;
#define VISITED 1
#define UNVISITED 0
typedef pair<string, int> psi;
vector<string> vec;
int visited[51] = {0,};
int ans =0;

int difCnt(string a, string b){   
    int cnt=0;   
    for (int i=0; i<a.size(); i++){
        if (a[i]!=b[i]) cnt+=1;
        if (cnt>=2) break;
    }    
    return cnt;
}


void bfs(string start, string goal){
    
    queue<psi> q;
    q.push(make_pair(start, 0));
    while(!q.empty()){
        if (q.front().first == goal){
            ans = q.front().second;
            return;
        }     
        for (int i=0; i<vec.size(); i++){
            if ((difCnt(q.front().first, vec[i]))==1 && visited[i]==UNVISITED){
                int newRound = (q.front().second)+1; 
                q.push(make_pair(vec[i], newRound));
                visited[i]=VISITED;
            }      
        }
        q.pop();
    }
    return;
}

int solution(string begin, string target, vector<string> words) {
    vec.assign(words.begin(), words.end());
    bfs(begin, target);    
    return ans;
}