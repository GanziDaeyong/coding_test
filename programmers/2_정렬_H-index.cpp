#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    
    sort(citations.begin(), citations.end(), greater<int>());
    int answer = 0;
    
    int maxV = citations[0];
    for (int i=maxV; i>=0; i--){
        int eachNum =0;
        for (int j=0; j<citations.size(); j++){
            if (citations[j]>=i){
                eachNum +=1;
            }
            if (eachNum >= i) {
                answer = i;
                return answer;
            }
        }
    }
    
    return answer;
    
    
}