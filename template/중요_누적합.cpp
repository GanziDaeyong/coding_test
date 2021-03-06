/*
 * 1. 어디?   누적합, 구간합은 특정 구간의 합을 '효율적'으로 풀기 위해 사용된다.
*            대부분 브루트포스처럼 보이는 문제들이기 때문에 구간 / 합으로 푸는 문제이면 꼭 누적합 적용 가능성을 검토해본다.
 * 2. 예시?   구간 i, j 내에서 오름차순이 몇 번 깨지는지 찾으시오
 * 3. 설명?   dp처럼, 이전 값들에 기반하여 누적 합을 쌓아나간다.
 *           범위를 조심해야한다. 헷갈리면 간단히 그려보면 되기 때문에 큰 문제는 아님.
 * 4. 문제?   백준 21318
 */

int presum() {
    int arr[100001] = {0,};  // 시간때매 결국 누적합 쓰는거니까 이왕이면 벡터대신 배열로.
    int N; cin>>N;
    int cnt = 0;    // 계산할 값. 대부분 문제들이 직접 합을 쌓기보다, 들어온 값들을 통해 도출한 값의 합을 쌓는 방식이다.
    int before = 0;   // 배열 직접 접근보다 before로 여태까지 값 관리해주는 게 낫다.
    for (int i = 1; i<=N; i++) {
        int t; cin>>t;
        if (t<before) cnt += 1; // 조건. 오름차순이 깨지는 경우
        arr[i] = cnt;
        before = t;             // before 값 갱신
    }
    int Q; cin>>Q;
    for (int i = 0; i<Q; i++) {
        int a, b; cin>>a; cin>>b;
        cout<<arr[b]-arr[a]<<"\n"; // 범위 실수가 가장 위험. 꼭 엣지 값 다시 살펴보자.
    }
    return 0;
}