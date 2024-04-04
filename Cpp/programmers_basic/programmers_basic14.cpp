#include <iostream>

using namespace std;

int solution(const int num, const int n){
    return (num % n == 0) ? 1 : 0;
}

int main(){
    int answer = 0;
    answer = solution(23,4564);
    cout << answer;
    return 0;
}