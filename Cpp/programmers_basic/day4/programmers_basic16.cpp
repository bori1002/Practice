//day4 문자열 n의 배수
#include <iostream>
#include <string>

using namespace std;

int solution(const int num, const int n){
    return (num % n == 0) ? 1 : 0;
}