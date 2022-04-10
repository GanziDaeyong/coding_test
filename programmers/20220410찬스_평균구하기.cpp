#include <string>
#include <vector>
using namespace std;

double solution(vector<int> arr) {
    double sum = 0;
    for (int v: arr) sum+= (v*1.0);
    return sum/arr.size()*1.0;
}