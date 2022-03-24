#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int zeroForPrime[10000000] = {1,1,};	
int maxV;
void es(){                       
    for (int i=2; i*i<maxV; i++){
        if (zeroForPrime[i]==1) continue;
        for (int j=i*2; j<=maxV; j+=i){
            zeroForPrime[j]=1;
        }
    }
}

int solution(string numbers) {
    
    int numCnt[11] = {0,};  // num도 바로 sort 가능한지 확인

    for (char v : numbers) numCnt[v-'0']+=1;
    sort(numbers.begin(), numbers.end(), greater<int>());
    maxV = stoi(numbers);
    
    es();

    int totalcnt =0;
    for (int i=2; i<=maxV; i++){
        if (zeroForPrime[i]==0){
            string numtostr = to_string(i);
            int goodtogo = 1;
            for (char c : numtostr){
                int ccnt = count(numtostr.begin(), numtostr.end(), c);
                if (numCnt[c-'0']<ccnt){
                    goodtogo = 0;
                    break;
                }
            }
            if (goodtogo) {
                totalcnt+=1;
            }
        }
    }
    return totalcnt;
}
