#include <bits/stdc++.h>
using namespace std;

int Priority(char ch) {
    if (ch == '*' || ch == '/') return 1;
    return 0;
}

int Operation(int num1, int num2, char ch) {
    if (ch == '+') return num1 + num2;
    else if (ch == '-') return num1 - num2;
    else if (ch == '*') return num1 * num2;
    return num1 / num2;
}

int main() {
    string st;
    cout << "Enter Operation: ";
    cin >> st;
    stack<int> numb;
    stack<char> opr;
    int num = 0, i = 0;
    while (i < st.size()) {
        if(st[i] >= '0' && st[i] <= '9'){
            num = 0;
            while(i < st.size() && (st[i] >= '0' && st[i] <= '9')){
                num = num * 10 + (st[i] - '0');
                i++;
            }
            cout << num << endl;
            numb.push(num);
        } 
        else{
            if(opr.size() == 0 || (Priority(st[i]) > Priority(opr.top()))) opr.push(st[i]);
            else{
                while(opr.size() > 0 && Priority(opr.top()) >= Priority(st[i])) {
                    int num1 = numb.top();
                    numb.pop();
                    int num2 = numb.top();
                    numb.pop();
                    int hold = Operation(num2, num1, opr.top());
                    opr.pop();
                    numb.push(hold);
                }
                opr.push(st[i]);
            }
            i++;
        }
    }
    while (opr.size() > 0) {
        int num1 = numb.top();
        numb.pop();
        int num2 = numb.top();
        numb.pop();
        int hold = Operation(num2, num1, opr.top());
        numb.push(hold);
        opr.pop();
    }
    cout << "Answer is: " << numb.top();
    return 0;
}
