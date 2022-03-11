#include <string>
#include <vector>
#include <queue>
using namespace std;

struct dyComp{
    bool operator()(int a, int b){
        return a>b;
    }
};

int solution(vector<int> scoville, int K) {
    
    priority_queue<int, vector<int>, dyComp> pq;
    for (int v : scoville){
        pq.push(v);
    }
    
    int mixTime = 0;
    while(1){
        int fir = pq.top();
        if (fir<K){
            if (pq.size()==1){
                return -1;
            }
            pq.pop();
            int sec = pq.top();
            pq.pop();
            int mixed = fir+(sec*2);
            mixTime+=1;
            pq.push(mixed);
        }
        else {
            break;
        }
    }
    
    
    int answer = mixTime;
    
    
    
    return answer;
}