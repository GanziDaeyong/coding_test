#include <string>
#include <vector>
#include <queue>

using namespace std;

#define VISITED 1
#define UNVISITED 0


int visited[200] = {0,};
int networkCnt=0;

int len=0;
vector<vector<int>> nodes;

void bfs(){
    queue<int> q;
    q.push(0);
    networkCnt+=1;
    while(1){
        if (q.empty()){
            int left=0;
            for (int i=0; i<len; i++){
                if (visited[i]==UNVISITED){
                    q.push(i);
                    networkCnt+=1;  // q.empty()는 한 네트워크가 종료되었다는 뜻
                    visited[i]=VISITED;
                    left=1;
                    break;
                }
            }
            if (left==0){
                return;
            }
            
        }
        
        for (int i=0; i<len; i++){
            if (nodes[q.front()][i]==1 && visited[i]==UNVISITED){
                q.push(i);
                visited[i]=VISITED;
            }
        }
        q.pop();
    }
}

int solution(int n, vector<vector<int>> computers) {
    
    nodes = computers;
    len =n;
    bfs();
    
    int answer = networkCnt;
    return answer;
}