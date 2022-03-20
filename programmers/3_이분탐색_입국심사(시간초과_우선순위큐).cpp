#include <string>
#include <vector>
#include <queue>
using namespace std;
typedef pair<long long, long long> p_lli;

struct dyComp {
    
    bool operator()(p_lli a, p_lli b){ // total, eachtime
        return a.first>b.first;
    }
    
};


long long solution(int n, vector<int> times) {
    
    priority_queue<p_lli, vector<p_lli>, dyComp> pq;
    
    for (int v: times){
        pq.push(make_pair(v, v));
    }
    
    for (int i=0; i<n-1; i++){
        p_lli fr = pq.top();
        pq.pop();
        fr.first += fr.second;
        pq.push(fr);
    }
    
    long long answer= pq.top().first;
    
    return answer;
}