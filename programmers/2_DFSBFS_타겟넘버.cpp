#include <string>
#include <vector>

#define POS 1
#define NEG 2

using namespace std;

vector<int> nvec;
int len;
int eachSum = 0;
int goal;
int ans=0;

void dfs(int cnt){
    if (cnt > len){
        if (eachSum==goal) ans+=1;     
        return;    
    }
    
    for (int i=POS; i<=NEG; i++){
        if (i==POS){
            eachSum+=nvec[cnt];
            dfs(cnt+1);
            eachSum-=nvec[cnt];
        }
        else if (i==NEG){
            eachSum-=nvec[cnt];
            dfs(cnt+1);
            eachSum+=nvec[cnt];
        }         
    }       
}


int solution(vector<int> numbers, int target) {
    goal = target;
    len = numbers.size();
    nvec.push_back(0);
    for (int v : numbers){
        nvec.push_back(v);
    }
    dfs(1);
    
    return ans;
}