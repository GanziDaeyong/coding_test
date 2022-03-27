#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

typedef pair<int, int> p_ii;
vector<p_ii> brid[101];
int visited[101] = {0,};

struct dycomp{
    bool operator()(p_ii a, p_ii b){
        return a.second>b.second;
    }
};

int solution(int n, vector<vector<int>> costs) {
    
    for (int i=0; i<n; i++) { vector<p_ii> tmp; brid[i] = tmp; }
    for (vector<int> v : costs){
        brid[v[0]].push_back(make_pair(v[1], v[2]));
        brid[v[1]].push_back(make_pair(v[0], v[2]));
    }
    
    priority_queue<p_ii, vector<p_ii>, dycomp> pq;
    visited[0] = 1;
    for (p_ii p : brid[0]) pq.push(p);
    
    int sum =0;
    while(!pq.empty()){
        p_ii curr = pq.top();
        if (visited[curr.first]){
            pq.pop();
            continue;
        }
        
        sum += curr.second;
        visited[curr.first] = 1;
        for (p_ii neighbor : brid[curr.first]) {
            pq.push(neighbor);
        }
    }

    int answer = sum;
    return answer;
}