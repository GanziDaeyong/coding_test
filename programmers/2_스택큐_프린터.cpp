#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
typedef pair<int,int> pii;

int solution(vector<int> priorities, int location) {
    queue<pii> q;

    vector<int> v;
    for (int i =0; i<priorities.size(); i++){
        q.push(make_pair(i, priorities[i]));
        v.push_back(priorities[i]);
    }
    sort(v.begin(), v.end(), greater<int>());
    int vecIdx = 0;
    
    int answer;
    int printed = 0;
    while(1){
        pii q_elem = q.front();
        int biggest = v[vecIdx];
        
        if (q_elem.second == biggest){
            printed+=1;
            if (q_elem.first == location){
                answer = printed;
                break;
            }
            q.pop();
            vecIdx+=1;
        }
        else {
            q.pop();
            q.push(q_elem);
        }
    }
 
    return answer;
}