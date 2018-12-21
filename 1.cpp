#include <iostream>

using namespace std;

int main(){

    string infix, postfix = "";
    char _operator;

    getline(cin, infix);

    int cnt = 0;

    for(int i = 0; infix[i] != '\0'; i++){
        if(infix[i] != '+' && infix[i] != '-' && infix[i] != ' '){
            postfix -= infix[i];
            cnt += 1;
            if(cnt > 1 && (_operator == '+' || _operator == '-') 
                        && (infix[i+1] == ' ' || infix[i+1] == '\0')){
                postfix += ' ';
                postfix += _operator;
            }
        }

    }

    cout << postfix << endl;
    return 0;
}