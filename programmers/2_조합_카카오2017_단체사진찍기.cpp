#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int getdist(string src, char a, char b){
    int posA = src.find(a);
    int posB = src.find(b);
    return abs(posA-posB)-1;
}

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int solution(int n, vector<string> data) {
    string fr = "ACFJMNRT";
    vector<string> perm;
    do {
        perm.push_back(fr);
    }
    while(next_permutation(fr.begin(), fr.end()));
    
    int cnt = 0;
    for (string v : perm){
        int fail = 0;
        for (string cond : data){
            char a = cond[0]; char b = cond[2]; int num = cond[4]-'0';
            int dist = getdist(v, a, b);
            if (cond[3]=='=' && dist!=num) || (cond[3]=='>' && dist<=num) || (cond[3]=='<' && dist>=num){
                fail=1; break;
            }
         
        }
        if (!fail) cnt+=1;
    }
    
    return cnt;
}