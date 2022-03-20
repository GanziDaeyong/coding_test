int left = 0;
int right = maxV;
int mid;
    
while (true){
        
	int mid = (left+right)/2;
        
	int v = mid에서 계산한 값;

       	if (v < goal){		// 계산한 값이 goal보다 작으면
		left = mid+1;	// 나눠서 오른쪽을 탐색
	}
	else if (v > goal){	// 반대 경우
		right = mid;	
	}	
	else {			// v == goal인 경우 리턴
		break;
	}
	if (left>=right){
		break;		// 답이 없는 문제는 l==r이 되는 순간 리턴.
	}    
    
}