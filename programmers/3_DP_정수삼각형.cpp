#include <string>
#include <vector>

using namespace std;

int dp[501][501] = {0,};
int maxV = 0;

int solution(vector<vector<int>> triangle) {
    
    dp[0][0] = triangle[0][0];
    for (int i=1; i<triangle.size(); i++){
        for (int j=0; j<triangle[i].size(); j++){
            if (j==0) {
                dp[i][j] = dp[i-1][j] + triangle[i][j];
            }
            else if (j==triangle[i].size()-1){
                dp[i][j] = dp[i-1][j-1] + triangle[i][j];
            }
            else {
                dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
            }
            if (i==triangle.size()-1 && dp[i][j] > maxV) maxV = dp[i][j];
        }
    }
    
    int answer = maxV;
    return answer;
}
