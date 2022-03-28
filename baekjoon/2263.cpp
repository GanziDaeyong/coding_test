//#include <algorithm>
//#include <iostream>
//#include <vector>
//
//// #define PRINT(x) cout<<x;
//
//using namespace std;
//
//int N;
//vector<int> inord;
//vector<int> postord;
//
//void DivConquer(int post_begin, int post_end, int in_begin, int in_end) {
//
//    if (post_end < post_begin || in_end < in_begin) return;
//
//    int root_value = postord[post_end];
//    cout<<root_value<<" ";
//
//    vector<int>::iterator it;
//    it = find(inord.begin(), inord.end(), root_value);
//    int in_root = (it - inord.begin());
//
//
//    int left_post_begin = post_begin;
//    int left_post_end = post_begin + (in_root - in_begin - 1);
//    int left_in_begin = in_begin;
//    int left_in_end = in_root -1;
//    int right_post_begin = left_post_end+1;
//    int right_post_end = right_post_begin + (in_end - in_root - 1);
//    int right_in_begin = in_root +1;
//    int right_in_end = in_end;
//    // left
//    DivConquer(left_post_begin, left_post_end, left_in_begin, left_in_end);
//    DivConquer(right_post_begin, right_post_end, right_in_begin, right_in_end);
//
//}
//
//int main() {
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        int tmp;
//        cin >> tmp;
//        inord.push_back(tmp);
//    }
//    for (int i = 0; i < N; i++) {
//        int tmp;
//        cin >> tmp;
//        postord.push_back(tmp);
//    }
//
//    DivConquer(0, N-1, 0, N-1);
//    return 0;
//}