#include <iostream>

using namespace std;

int solution(const int number, const int n, const int m){    
    return (number % n == 0) && (number % m == 0) ? 1 : 0;
}

int main(){
    int answer = 0;
    answer = solution(21,7,4);
    cout << answer;
    return 0;
}