int dp[501][501] = {0,};
int maxV = 0;

int solution(vector<vector<int>> triangle) {
    
    dp[0][0] = triangle[0][0];
    for (int i=1; i<triangle.size(); i++){
        for (int j=0; j<triangle[i].size(); j++){
            if (j==0) {
                dp[i][j] = dp[i-1][j] + triangle[i][j];	// 왼쪽 끝
            }
            else if (j==triangle[i].size()-1){
                dp[i][j] = dp[i-1][j-1] + triangle[i][j];	// 오른쪽 끝은 길이 하나씩
            }
            else {
                dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j]; // 중간은 최댓값
            }
            if (i==triangle.size()-1 && dp[i][j] > maxV) maxV = dp[i][j]; // 이건 그냥 max찾기
        }
    }
    
    int answer = maxV;
    return answer;
}
