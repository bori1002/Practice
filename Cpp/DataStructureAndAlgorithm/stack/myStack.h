#pragma once
#include <iostream>
#include <vector>

using namespace std;

class myStack{
private:
    int size;
    vector<int> items;
    int top;

public:
    myStack();
    void push(int);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
    void setSize(int);
    int getSize();
};
