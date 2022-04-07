#include <string>
#include <vector>
#include <set>

using namespace std;

set<int> s[9];

int makeConsecutive(int N, int times){
    
    string resStr = "";
    for (int i=0; i<times; i++){
        resStr += to_string(N);
    }
    return stoi(resStr);
    
}


int solution(int N, int number) {
    
    for (int i=1; i<=8; i++){
        int cons = makeConsecutive(N, i);
        if (cons==number) return i;
        s[i].insert(cons);
        
        for (int j=1; j<i; j++){
            for (auto it = s[j].begin(); it!=s[j].end(); ++it){
                int group1 = *it;
                for (auto it2 = s[i-j].begin(); it2!=s[i-j].end(); ++it2){
                    int group2 = *it2;
                    if (group1 + group2 == number) return i;
                    if (group1 - group2 == number) return i;
                    if (group1 * group2 == number) return i;
                    if (group2!=0 && group1 / group2 == number) return i;
                    
                    s[i].insert(group1 + group2);
                    if (group1-group2>0) s[i].insert(group1 - group2);
                    s[i].insert(group1 * group2);
                    if (group2!=0) s[i].insert((int) group1/group2);
                }
            }
        }
    }
    
    return -1;
}