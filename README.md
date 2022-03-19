### 백준/프로그래머스 문제풀이

대부분의 문제는 cpp로 풀되,  
일부 string 다루는 문제들에서만 편의상 python 씁니다.

******************

### 기억할 것

- map.erase(key) 
- (int*) malloc(sizeof(T)*length)
- vecB.assign(vecA.begin(), vecA.end()) | vector deep copy 하는법
- copy(map.begin(), map.end(), vec.begin()) | map을 vector로. 자료형 동일해야 함 (m<s,i>면 vec<pair<s, i>>)
- 위 copy할 때 vector을 미리 map크기로 resize 안해주면 segmentation에러 발생
- priority_queue, queue는 순회 안됨
- sort(v.begin(), v.end(), greater<int>()); / less<int>()
- 우선순위 큐 정렬: 구조체 선언 + operator 오버라이딩 후 pq<T, vector<T>, 구조체> 식으로 선언. Template 참고
- map에서 key 유무 판단은 count, 해당 원소에 접근해야 하면 find 혹은 m[key]로 직접 접근

******************
  
### 알아볼 것
  
- 우선순위 큐 정렬 순서 오버라이딩 시 일반 정렬과 반대로 작동하는듯?


******************
  
### 못 푼 문제
아이디어 30분 이상 못떠올리거나 / 1시간 이내로 완료하지 못한 문제들  
2트 내에 못풀면 답 보기
- 프로그래머스 - 브루트포스 - 소수찾기 (2트 fail)
- 프로그래머스 - 힙 - 디스크컨트롤러
- ~~프로그래머스 - 정렬 - 가장큰수~~
- ~~프로그래머스 - 그리디 - 구명보트~~
