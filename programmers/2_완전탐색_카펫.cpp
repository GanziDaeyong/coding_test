#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    for (int i=1; i<=yellow; i++){
        if (yellow%i==0){
            if ((((i+2)*((yellow/i)+2))-yellow) == brown){
                answer.push_back(i+2);
                answer.push_back(yellow/i+2);
                break;
            }
        }
    }
    sort(answer.begin(), answer.end(), greater<int>());
    return answer;
}