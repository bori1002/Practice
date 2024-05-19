//day4 flag에 따라 다른 값 반환하기
#include <iostream>

using namespace std;

int solution(int a, int b, bool flag){   
    return (flag == true) ? a+b : a-b;
}