//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//std::vector<std::pair<int, int>> schArr;
//
//int main() {
//
//    // scan input and sort by fin_time
//    int n;
//    std::cin>>n;
//    schArr.reserve(n);
//
//    for (int i=0; i<n; i++) {
//        std::pair<int, int> temp;
//        std::cin>>temp.second>>temp.first;  // pair (fin, start)
//        schArr.push_back(temp);
//    }
//    std::sort(schArr.begin(), schArr.end());
//
//    // schedule
//    int scheduleNum = 1;
//    int curF=schArr[0].first;
//    for (int i=1; i<n; i++){
//        if (schArr[i].second>=curF) {
//            curF=schArr[i].first;
//            scheduleNum++;
//        }
//    }
//    std::cout<<scheduleNum;
//    return 0;
//}
