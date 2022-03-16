#include <string>
#include <vector>
#include <algorithm>
#define DONE -999
using namespace std;
int solved =0;

int solution(int n, vector<int> lost, vector<int> reserve) {

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    vector<int>::iterator it;
    
    for (int i=0; i<lost.size(); i++){
        it = find(reserve.begin(), reserve.end(), lost[i]);
        if (it != reserve.end()){
            solved+=1;
            lost[i] = DONE;
            *it = DONE;
   
        } 
    }
    
    for (int i=0; i<lost.size(); i++){
        if (lost[i]==DONE) continue;
        
        it = find(reserve.begin(), reserve.end(), lost[i]-1);
        if (it != reserve.end()){ 
            solved+=1;
            lost[i] = DONE;
            *it = DONE;
            continue;
        } 
        it = find(reserve.begin(), reserve.end(), lost[i]+1);
        if (it != reserve.end()){
            solved+=1;
            lost[i] = DONE;
            *it = DONE;
            continue;
        }
    }

    int answer = n - lost.size() + solved;
    return answer;

}