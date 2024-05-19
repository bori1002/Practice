//day4 홀짝에 따라 다른 값 반환하기
#include <iostream>

using namespace std;

int solution(const int n){   
    int answer = 0;
    int temp = 0;
    if(n % 2 == 1){
        for(int i = 1; i <= n; i+=2){ 
            temp += i;
        }   
    }
    else if(n % 2 == 0){
        for(int i = 2; i <= n; i+=2){
            temp += (i * i);
        }
    }
    answer = temp;
    return answer;
}