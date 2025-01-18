#include <iostream>
#include "myStack.h"

using namespace std;

int main(){
    //test myStack
    myStack my_stack;
    my_stack.setSize(6);
    //push
    for(int i = 0; i < 7; i++){
        my_stack.push(i);
        my_stack.peek();
    }
    //peek & pop
    for(int i = 0; i < 7; i++){
        cout << "peeking test: " << my_stack.peek() << endl;
        cout << "Pop!" << my_stack.pop() << endl;
    }
    return 0;
}