#include <iostream>

int solution(const int a, const int b, const int c){
    if(a != b && b != c && a != c) return a + b + c;
    else if(a == b && b == c && a == c) return (a + b + c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);
    else if(a == b || b == c || a == c) return (a + b + c) * (a*a + b*b + c*c);
}

int main(){
    int answer = 0;
    std::cout << solution(4, 4, 4);

    return 0;
}