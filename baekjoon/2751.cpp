//#include <iostream>
//#include <random>
//
//using namespace std;
//
//int N;
//int arr[1000000] = {0,};
//
//int randomPivot(int front, int rear) {
//    // 랜덤하게 피봇을 뽑는 함수. 범위 내에서 Math.random()을 사용하였다.
//    int ran = rand()%(front-rear+1) + front;
//    return ran;
//}
//
//
//void swap(int *subarr, int i, int j) {
//    int tmp = subarr[i];
//    subarr[i] = subarr[j];
//    subarr[j] = tmp;
//}
//
//void insertionSort(int *subarr, int front, int rear) {
//    if (front == rear) {
//        return;
//    }
//    for (int i = front; i < rear + 1; i++)
//        for (int j = i; (j > front) && (subarr[j] < (subarr[j - 1])); --j)
//            swap(subarr, j, j - 1);
//}
//
//int partition(int *subarr, int front, int rear, int pivotIdx) {
//    swap(subarr, rear, pivotIdx);
//    int criteria = subarr[rear];
//    int i = front - 1;
//    for (int j = front; j <= rear - 1; j++) {
//        if (subarr[j] <= criteria) {
//            i++;
//            swap(subarr, i, j); ////df sdf/
//        }
//    }
//    swap(subarr, i + 1, rear);
//    return i + 1;
//}
//
//void qsort(int *subarr, int front, int rear) {
//    if (rear - front + 1 <= 5) {
//        insertionSort(subarr, front, rear);
//        return;
//    }
//    int pivotIdx = randomPivot(front, rear);
//    int pivot = partition(subarr, front, rear, pivotIdx);
//    qsort(subarr, front, pivot - 1);
//    qsort(subarr, pivot + 1, rear);
//}
//
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> N;
//    for (int i = 0; i < N; i++) cin >> arr[i];
//    qsort(arr, 0, N - 1);
//    for (int i = 0; i < N; i++) cout << arr[i] << "\n";
//    return 0;
//}