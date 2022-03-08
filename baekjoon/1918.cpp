#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <unordered_set>
using namespace std;
#define PRINT(x) cout << x << "\n"
#define MUL '*'
#define DIV '/'
#define ADD '+'
#define SUB '-'
#define OPEN '('
#define CLOSE ')'

unordered_set<char> ops({MUL, DIV, ADD, SUB, OPEN, CLOSE});
stack<char> st;
queue<char> q;

bool isEqualPriority(char v) {
    if ((v==MUL||v==DIV) && st.top()==MUL||st.top()==DIV) {
        return true;
    }
    return false;
 
}

int main() {
    string eq;
    cin >> eq;
    for (char v : eq) {
        // operand
        if (ops.find(v) == ops.end()) {  
            q.push(v);
            continue;
        }
        // operator
        if (st.empty()){
            st.push(v);
        }
        else if (v == OPEN) {
            st.push(v);
        } 
        else if (v == CLOSE) {
            char tmpOps = st.top();
            while (tmpOps != OPEN) {
                q.push(tmpOps);
                st.pop();
                tmpOps = st.top();
            }
            st.pop();
        }
        else if (v== MUL || v==DIV) {
            if (isEqualPriority(v)){
                q.push(st.top());
                st.pop();
            }
            st.push(v);
        }
        else {
            char tmpOps = st.top();
            while(tmpOps!=OPEN){
                q.push(tmpOps);
                st.pop();
                if (st.empty()) break;
                tmpOps = st.top();

            }
            st.push(v);
        }
    }

    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    while (!q.empty()) {
        cout<<q.front();
        q.pop();
    }

    return 0;
}
