//day4 조건 문자열
#include <iostream>

using namespace std;

int solution(string ineq, string eq, int n, int m){   
    if(ineq == ">"){
        if(eq == "=") return (n >= m) ? 1 : 0;
        else if(eq == "!") return (n > m) ? 1 : 0;
        else return -1;
    }
    else if(ineq == "<"){
        if(eq == "=") return (n <= m) ? 1 : 0;
        else if(eq == "!") return (n < m) ? 1 : 0;
        else return -1;
    }
    else return -1;
}