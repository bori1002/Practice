//day5 주사위 게임 2
#include <iostream>

int solution(const int a, const int b, const int c){
    if(a != b && b != c && a != c) return a + b + c;
    else if(a == b && b == c && a == c) return (a + b + c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);
    else if(a == b || b == c || a == c) return (a + b + c) * (a*a + b*b + c*c);
}