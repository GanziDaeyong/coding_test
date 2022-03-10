void es(){
    int zeroForPrime[10000] = {1,1,};			// 0과 1 사전 처리. 전부 소수라 가정
    int maxV = 100;                             // 최대 범위
    for (int i=2; i*i<maxV; i++){
        if (zeroForPrime[i]==1) continue;       // 이미 합성수 처리되었으면 패스
        for (int j=i*2; j<=maxV; j+=i){
            zeroForPrime[j]=1;                  // 배수들에 대해 합성수 처리
        }
    }
}