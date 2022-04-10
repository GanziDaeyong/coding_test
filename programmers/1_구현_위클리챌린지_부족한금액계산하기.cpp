using namespace std;


long long dp[2501] = {0,};

long long solution(int price, int money, int count)
{
    dp[0] = price;
    long long sum = dp[0];
    for (int i=1; i<count; i++){
        dp[i]=dp[i-1]+price;
        sum += dp[i];
    }
    
    long long answer = sum>money? sum-money : 0;
    
    return answer;
}