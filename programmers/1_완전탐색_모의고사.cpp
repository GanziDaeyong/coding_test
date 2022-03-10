#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    
    vector<int> one = {1,2,3,4,5};
    vector<int> two = {2,1,2,3,2,4,2,5};
    vector<int> thr = {3,3,1,1,2,2,4,4,5,5};
    
    int oneIdx = 0;
    int twoIdx = 0;
    int thrIdx = 0;
    
    int oneAns = 0;
    int twoAns = 0;
    int thrAns = 0;
    
    for (int v : answers){    
        
        if (oneIdx>=5) oneIdx=0;
        if (twoIdx>=8) twoIdx=0;
        if (thrIdx>=10) thrIdx=0;
        
        if (one[oneIdx]==v) oneAns++;
        if (two[twoIdx]==v) twoAns++;
        if (thr[thrIdx]==v) thrAns++;
        
        oneIdx++;
        twoIdx++;
        thrIdx++;
        
    }
    
    vector<int> answer;
    if (oneAns == twoAns && oneAns == thrAns && oneAns==0) return answer;
    if (oneAns>=twoAns && oneAns>=thrAns) answer.push_back(1);
    if (twoAns>=oneAns && twoAns>=thrAns) answer.push_back(2);
    if (thrAns>=oneAns && thrAns>=twoAns) answer.push_back(3);
    
    
    return answer;
}