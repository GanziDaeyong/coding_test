#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> map[1001];
int N,M, Astart, Bstart;

void initMap(){
    for (int i=0; i<=N; i++) map[i].clear();
}

void solve(int time) {

    // located in-method to avoid explicit initialization for every cases.
    queue<int> qA;
    queue<int> qB;
    int visited[1001] = {0,};
    int sametime[1001] = {0,}; 

    qA.push(Astart);        qB.push(Bstart);
    visited[Astart] = 1;    visited[Bstart] = 2;

    int day = 1;

    while(!qA.empty()||!qB.empty()) {

        // simple BFS implementation
        int qAsize = qA.size();
        int qBsize = qB.size();

        for (int i=0; i<qAsize; i++) {
            int Apopped = qA.front();   
            qA.pop();            
            // conflict zone excluded from pushing adjacent nodes.   
            if (visited[Apopped]==3) continue; 
            for (int adj: map[Apopped]) {
                if (visited[adj]==0) {
                    visited[adj] = 1;
                    // added table "sametime" to mark if conflict arises
                    sametime[adj] = day;
                    qA.push(adj);
                }
            }
        }
            
        for (int i=0; i<qBsize; i++) {
            int Bpopped = qB.front();   
            qB.pop();               
            if (visited[Bpopped]==3) continue; 
            for (int adj: map[Bpopped]) {
                if (visited[adj]==1 && sametime[adj]==day){ // conflict detected
                    visited[adj] = 3; 
                }
                if (visited[adj]==0){
                    visited[adj] = 2; 
                    qB.push(adj);
                }
            }
        }
        day++;
    }

    // cnt the result
    int candCnt=0;
    int aCnt=0;
    int bCnt=0;
    int conflictCnt=0;
    for (int i=1; i<=N; i++) {
        if (visited[i]==1) aCnt++;
        else if (visited[i]==2) bCnt++;
        else if (visited[i]==3) conflictCnt++;
        else if (visited[i]==0) candCnt++;
    }

    int additional = 0;
    if ( aCnt <= N/2 ) {
        if ( N/2+1 <= aCnt+conflictCnt+candCnt ) additional = (N/2+1)-aCnt;
        else additional=-1;
    }

    cout<<"#"<<time<<" "<<conflictCnt<<" "<<additional<<"\n";
}



int main(){

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T; cin>>T;

    for (int i=0; i<T; i++) {
        N, M;
        cin>>N>>M>>Astart>>Bstart;
        for (int j=0; j<M; j++) {
            int a, b;
            cin>>a>>b;
            map[a].push_back(b);
            map[b].push_back(a);
        }
        solve(i+1);
        initMap();
    }

return 0;
}