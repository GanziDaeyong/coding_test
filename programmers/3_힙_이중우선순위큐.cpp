#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
using namespace std;
typedef pair<int, int> pii;

struct dyComp{
    bool operator()(int a, int b){
        return a>b;
    }
};


vector<int> solution(vector<string> operations) {
    vector<int> answer;
    
    priority_queue<int> pqDown;
    priority_queue<int, vector<int>, dyComp> pqUp;
    map<int, int> m;
    
    for (int i=0; i<operations.size(); i++){
        
        if (operations[i] == "D 1" && m.size()!=0){
            while(1){
                if (m.count(pqDown.top())==0){
                    pqDown.pop();
                }
                else{
                    break;
                }
            }
            m[pqDown.top()]-=1;
            if (m[pqDown.top()]==0) {
                m.erase(pqDown.top());
                
            }
            pqDown.pop();
        } else if (operations[i] == "D -1"&& m.size()!=0){
            while(1){
                if (m.count(pqUp.top())==0){
                    pqUp.pop();
                }
                else{
                    
                    break;
                }
            }
            
            m[pqUp.top()]-=1;
            if (m[pqUp.top()]==0) {
                m.erase(pqUp.top());
            }
            pqUp.pop();
        }
        else if (operations[i][0]=='I'){
            string toInsert = operations[i].substr(2);
            int toNum = stoi(toInsert);
            
            if (m.count(toNum)==1){
                m[toNum] +=1;
            }
            else {
                m.insert(make_pair(toNum, 1));
            }
            
            pqUp.push(toNum);
            pqDown.push(toNum);
        }
    }
    // answer.push_back(m.size());
    if (m.size()==0) {
        answer = {0, 0};
        return answer;
    }
    
 
    
    vector<pii> toSort;
    toSort.resize(m.size());
    copy(m.begin(), m.end(), toSort.begin());
    sort(toSort.begin(), toSort.end());
    
    answer.push_back(toSort[toSort.size()-1].first);
    
    if (toSort.size()>=2){
        answer.push_back(toSort[0].first);
    }
    
    
    
    
    return answer;
}