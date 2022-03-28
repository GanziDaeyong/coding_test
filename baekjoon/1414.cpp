#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int, int> pii;
vector<pii> m[51];
int visited[51]={0,};

struct dycomp{
    bool operator()(pii a, pii b){
        return a.second>b.second;
    }
};


int main(){
    int N; cin>>N;
    for (int i=0;i<N; i++){ vector<pii>tmp; m[i]=tmp; }
    int totalline = 0;
    for (int i=0;i<N; i++){
        for (int j=0; j<N; j++){
            char t; cin>>t;
            if (t=='0') continue;
            int tonum;
            if (t>'Z') tonum = t-'a'+1;
            else tonum = t-'A'+27;
            if (j!=i) {
                m[i].push_back(make_pair(j, tonum));
                m[j].push_back(make_pair(i, tonum));
            }
            totalline+=tonum;
        }
    }

    priority_queue<pii, vector<pii>, dycomp> pq;
    int usedline = 0;
    // 첫 원소 처리
    visited[0] = 1;
    for (pii neighbor: m[0]) pq.push(neighbor);
    while(!pq.empty()){
        pii curr = pq.top();
        if (visited[curr.first]){ pq.pop(); continue; }
        visited[curr.first] = 1;
        usedline += curr.second;
        pq.pop();
        for (pii neighbor: m[curr.first]) { pq.push(neighbor); }
    }

    for (int i=0; i<N; i++) {
        if (visited[i]==0) {
            cout<<-1;
            return 0;
        }
    }

    cout<< totalline-usedline;
    return 0;
}