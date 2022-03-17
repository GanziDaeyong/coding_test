#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    
    int isFin = 0;
    
    for (int i=1; i<number.size(); i++){
        if (number[i]>number[i-1]){
            for (int j=i-1; j>=0; j--){
                if (number[i]>number[j] && number[j]!='X'){
                    k-=1;
                    number[j] = 'X';
                    if (k==0) {
                        
                        isFin = 1;
                        break; // done
                    }
                }
                else if (number[i]<=number[j] && number[j]!='X') break;
            }
            if (isFin) break;
        }
    }

    string answer = "";
    for (int i=0; i<number.size()-k; i++){
        if (number[i]!='X') answer+=number[i];
    }
    
    return answer;
}