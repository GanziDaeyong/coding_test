#include <string>
#include <vector>
#include <algorithm>
using namespace std;


bool dyComp(int a, int b){
    string as = to_string(a); string bs = to_string(b);
    if (as[0]!=bs[0]) return as[0]>bs[0];
    if (as == bs) return a>b;
    
    int candA = stoi(as+bs);
    int candB = stoi(bs+as);
    return candA>candB;
}

string solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end(), dyComp);
    string answer = "";
    
    for (int v : numbers){
        string toStr = to_string(v);
        answer += toStr;    
    }
    if (answer[0]=='0') answer="0";
    return answer;
}