#include <string>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;
int solution(vector<int> people, int limit) {
    
    sort(people.begin(), people.end(), greater<int>());
    deque<int> dq;
    dq.assign(people.begin(), people.end());
    
    int boat = 0;
    
    while(!dq.empty()){
        
        if (dq.size()==1){
            boat+=1;
            break;
        }
        
        int fir = dq.front();
        int last = dq.back();

        if (fir + last <= limit){
            dq.pop_back();
        }
        dq.pop_front();
        boat+=1;
            
    }
    return boat;
}