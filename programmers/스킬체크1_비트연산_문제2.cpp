#include <string>
#include <vector>
#include <cmath>
#include <stack>
using namespace std;

string getBinary(int v, int n){
    
    int next = v;
    stack<char> st;
    while(next>1){
        int left = next%2;
        if (left) st.push('#');
        else st.push(' ');
        next = next/2;
    }
    st.push('#');
    
    while(st.size()<n){
        st.push(' ');
    }
    
    string res = "";
    while(!st.empty()){
        char c = st.top();
        res += c;
        st.pop();
    }
    return res;   
}



vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    n = arr1.size();
    for (int i=0; i<n; i++){
        int byteunion = arr1[i] | arr2[i];
        answer.push_back(getBinary(byteunion, n));        
    }
    return answer;
}