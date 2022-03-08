//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int N;
//int arr[1000];
//int res;
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
//    for (int i = 0; i < N; i++) cin >> arr[i];
//    sort(arr, arr + N);
//
//    res += arr[0];
//    for (int i = 1; i < N; i++) {
//        arr[i] += arr[i - 1];
//        res += arr[i];
//    }
//    cout << res;
//    return 0;
//}