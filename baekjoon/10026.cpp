#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define PR pair<int,int>
using namespace std;

int m[101][101] = {0,};
bool v[101][101] = {0,};
int N;
int nI[4] = {0,0,-1,1};
int nJ[4] = {-1,1,0,0};

int R,G,B;

void cls(){
    for (int i=1; i<=N; i++){
        for (int j=1; j<=N; j++){ v[i][j]=0;
        }
    }

}

void Bfs(PR st, bool isColorBlind){
    queue<PR> q;
    q.push(st);
    v[st.first][st.second]=true;
    while(!q.empty()){
        PR curr = q.front();
        q.pop();
        int currColor = m[curr.first][curr.second];
        for(int i=0;i<4;i++){
            int newI = curr.first+nI[i];
            int newJ = curr.second+nJ[i];
            int newColor = m[newI][newJ];
            if(newI<1 || newI>N || newJ<1 || newJ>N) continue;
            if (isColorBlind) {
                if (currColor=='G') currColor='R';
                if (newColor=='G') newColor='R';
            }
            if(currColor==newColor && !v[newI][newJ]) {
                q.push(make_pair(newI, newJ));
                v[newI][newJ]=true;
            }
        }
    }
}

int main() {

    int colorCnt=0;
    int blindCnt=0;

    cin>>N;
    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            char tmp;
            cin>>tmp;
            m[i][j]=tmp;
        }
    }

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            if (!v[i][j]){
                Bfs(make_pair(i,j), false);
                colorCnt++;
            }
        }
    }

    cls();

    for (int i=1; i<=N; i++) {
        for (int j=1; j<=N; j++) {
            if (!v[i][j]){
                Bfs(make_pair(i,j), true);
                blindCnt++;
            }
        }
    }
    cout<<colorCnt<<"\n"<<blindCnt;
    return 0;
}