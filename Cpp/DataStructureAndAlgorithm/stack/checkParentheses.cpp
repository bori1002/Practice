#include <iostream>
#include <vector>
#include "myStack.h"

using namespace std;

int main(){
    char Parentheses[5] = {'(','(',')',')',')'};
    myStack check_stack;
    /*
    짝이 맞다는 것은 열린괄호와 닫힌 괄호의 갯수가 같다
    열린괄호 -> 닫힌 괄호의 순서대로 진행된다.
    */

    //여는 괄호를 읽으면 스택에 push
    for(char p : Parentheses){
        if(p == '('){
            check_stack.push(p);
        }
        //닫는 괄호를 읽으면 스택에서 top 과 비교하여 쌍이 일치하면 pop
        else if(p == ')'){
            if(check_stack.isEmpty()){//닫힌 괄호를 읽은경우 stack이 비었을때
                cout << "error!\n";
            }
            check_stack.pop();
        }
    }
    
    if(check_stack.isEmpty()){
        cout << "correct!\n";
    }
    else if(!check_stack.isEmpty()){//모든 괄호를 읽은 후 stack이 비어있지 않은 경우
        cout << "error!\n";
    }
    //모든 검사 후 스택이 비어 있으면 괄호 짝이 맞는다.

    return 0;
}