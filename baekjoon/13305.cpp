////#include <iostream>
////#include <algorithm>
////#include <vector>
////
////using namespace std;
////
////int N, FLAG;
////vector<int> cities;
////vector<int> roads;
////long res=0;
////
////int main() {
////    ios_base::sync_with_stdio(false);
////    cin.tie(NULL);
////    cout.tie(NULL);
////    cin >> N;
////    FLAG = N;
////    for (int i=0; i<N-1; i++) { int tmp; cin>>tmp; roads.push_back(tmp);}
////    for (int i=0; i<N; i++) { int tmp; cin>>tmp; cities.push_back(tmp);}
////    while (true) {
////        int minIdx = min_element(cities.begin(),cities.begin()+FLAG) - cities.begin();
////        long dist=0;
////        for (int i=minIdx; i<FLAG; i++){
////            if (i==N-1) break;
////            dist+=roads[i];
////        }
////        res+=1L*cities[minIdx]*dist;
////        FLAG = minIdx;
////        if (FLAG==0) break;
////    }
////    cout<<res;
////    return 0;
////}
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//long N, minPrice;
//vector<long> cities, roads;
//long res;
//
//int main() {
//    cin>>N;
//    minPrice=1000000001;
//    cities.reserve(100001);
//    roads.reserve(100001);
//    for (int i=0; i<N-1; i++) { long tmp; cin>>tmp; roads.push_back(tmp);}
//    for (int i=0; i<N; i++) { long tmp; cin>>tmp; cities.push_back(tmp);}
//    for (int i=0; i<N-1; i++) {
//        if (cities[i]<minPrice) minPrice=cities[i];
//        res+=roads[i]*minPrice;
//    }
//    cout<<res;
//    return 0;
//}
//
