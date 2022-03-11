#include <string>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int, int> pii;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    
    queue<pii> q;
    for (int i=0; i<progresses.size(); i++){
        q.push(make_pair(progresses[i], speeds[i]));
    }
    
    int fir = 1;
    int day = 1;
    int dayCount[102] = {0};
    while (!q.empty()){
        if (fir){
            q.front().first+=day*(q.front().second);  
            fir =0;
        } else{
            q.front().first+=q.front().second;
        }
        
        if (q.front().first>=100){
            q.pop();
            fir=1;
            dayCount[day] +=1;
            continue;
        }
        day+=1;
    }
    
    vector<int> answer;
    for (int i=0; i<day+1; i++){
        if (dayCount[i]!=0){
            answer.push_back(dayCount[i]);
        }
    }
    return answer;
}