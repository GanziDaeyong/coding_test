    
int maxA = 0; 					// for문에 들어가기 전 범위 중 최대로.
for (int i=3; i<money.size()-1; i++){       	// 하나는 3부터 len-1까지
	dp[i] = max(dp[i-2], dp[i-3]) + money[i];
	if (dp[i]>maxA) maxA=dp[i];
}

int maxB = 0;					// 두번째 케이스
for (int i=4; i<money.size(); i++){	// 두번째는 4부터 	
	dp[i] = max(dp[i-2], dp[i-3])+ money[i];
        if (dp[i]>maxB) maxB=dp[i];
}
    
int answer = (maxA > maxB) ? maxA : maxB;
}
