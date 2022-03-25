#include <string>
#include <vector>

using namespace std;

int dp[1000001] = {0,};

int solution(vector<int> money) {
      
    dp[0] = money[0];
    dp[1] = money[1];
    dp[2] = money[2]+dp[0];
    
    int maxA = max(max(dp[0], dp[1]),dp[2]);
    for (int i=3; i<money.size()-1; i++){
        dp[i] = max(dp[i-2], dp[i-3]) + money[i];
        if (dp[i]>maxA) maxA=dp[i];
    }
    
    
    dp[2] = money[2];
    if (money.size()>3) dp[3] = money[3]+dp[1];
    
    
    int maxB = max(max(dp[1], dp[2]),dp[3]);
    for (int i=4; i<money.size(); i++){
        dp[i] = max(dp[i-2], dp[i-3])+ money[i];
        if (dp[i]>maxB) maxB=dp[i];
    }
    
    int answer = (maxA > maxB) ? maxA : maxB;
    return answer;
}
