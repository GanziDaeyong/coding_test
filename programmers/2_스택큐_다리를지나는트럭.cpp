#include <string>
#include <vector>
#include <queue>
#include <map>
using namespace std;
typedef pair<int, int> pii;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 1;
    int truckIdx = 0;
    int totalWeight = 0;
    map<int, int> m;
    queue<pii> q;
    
    q.push(make_pair(truckIdx, truck_weights[truckIdx]));
    totalWeight += truck_weights[truckIdx];
    m[truckIdx] = bridge_length;
    
    while(1){
        
        map<int, int>::iterator it;
        
        if (totalWeight + truck_weights[truckIdx+1]<=weight){
            truckIdx+=1;
            totalWeight+=truck_weights[truckIdx];
            q.push(make_pair(truckIdx, truck_weights[truckIdx]));
            m[truckIdx] = bridge_length;
        }
        
        for (it = m.begin(); it!=m.end(); it++){
            it->second-=1;    
        }
        if (m[q.front().first]<=0){
            m.erase(q.front().first);
            totalWeight -= q.front().second;
            if (q.front().first == truck_weights.size()-1){
                time+=1;
                break;
            }
            q.pop();
        }
        time +=1;
        
        }
   
    // 30분 풀었음
    
    
    int answer = time;
    return answer;
}