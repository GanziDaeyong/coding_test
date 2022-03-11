#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    int found = 0;
    for (int i =0; i<completion.size(); i++){
        if (participant[i]!=completion[i]){
            found = 1;
            return participant[i];
        }
    }
    return participant[participant.size()-1];
    
}