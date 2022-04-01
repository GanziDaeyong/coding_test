/*
 * 1. 어디?   유니온파인드는, 두 노드가 동일 집단에 속하는지 판단하는 문제에 사용된다. * 단순히 경로가 이어져있는지 확인할때에는 bfs, dfs 대용으로 쓰기 좋다.
 * 2. 예시?   도시들의 연결 정보가 주어졌을 때, 여행 계획이 가능한지 판단하시오
 * 3. 설명?   find -> 부모를 재귀적으로 찾는다. 자기 자신이 부모일 때가 최상위다. 
             union -> 합친다. find를 시행해서 가장 최상위 부모 기준으로, 값이 큰 쪽을 작은 쪽에 붙인다.
             samep -> 부모가 같은지 찾는다. 루트 최신화가 안된 경우가 있을 수 있으니 find(a) 와 find(b)를 기준으로 하는게 안전하다.
 * 4. 문제?   백준 1717, 백준 1976
 */

int p[1000001] = {0,};  // 부모 배열 선언. 이왕이면 배열로.

int find(int x){
    if (x == p[x]) return x;        // 찾으면 리턴
    else return p[x] = find(p[x]);  // 재귀적으로 최상위 부모 찾기
}

void uni(int x, int y){
    x = find(x);
    y = find(y);
    if (x<y) p[y] = x;
    else if (x>y) p[x] = y;         // 최상위 부모 중 값에 따라 붙여주기
}
int same_p(int x, int y){
    return find(x)==find(y);
}

int uni_find(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    // int n, m; cin>>n;cin>>m;

    for (int i=0; i<=n; i++) p[i]=i; // 중요. 처음에는 자기 자신이 부모다.
    
    for (int i=0; i<m; i++){
        // int inst, a, b; cin>>inst;cin>>a;cin>>b;
        if (inst==0) uni(a, b);
        else {
            if(same_p(a, b)) cout<<"YES\n";
            else cout<<"NO\n";
        } 
    }    

    return 0;
}