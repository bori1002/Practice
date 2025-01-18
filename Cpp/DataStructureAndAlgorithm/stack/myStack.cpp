#include "myStack.h"
#include <cstdlib>//exit() 함수 활용을 위해

using namespace std;
//init
myStack::myStack(){
    top = -1;
    this->size = 100;
    items.resize(this->size);
}
//size setting
void myStack::setSize(int size){
    this->size = size;
}
//check empty
bool myStack::isEmpty(){
    return top == -1;
}
//check full
bool myStack::isFull(){
    return top == size -1;
}
//push
void myStack::push(int item){
    if(isFull()){//prevent overflow
        cout << "Overflowed! Can't push" << item << ".\n";
        return;
    }
    items[++top] = item;
    cout << "pushed " << item << endl;
}
//pop top item
int myStack::pop(){
    if(isEmpty()){
        cout << "UnderFlow! Can't pop anything.\n";
        exit(EXIT_FAILURE);//exit program
    }
    cout << "poped " << items[top] << endl;
    return items[top--];
}
//peek
int myStack::peek(){
    if(isEmpty()){
        cout << "Can't peek anything. Stack is empty\n";
        exit(EXIT_FAILURE);//exit program
    }
    return items[top];
}