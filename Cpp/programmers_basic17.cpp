#include <iostream>

using namespace std;

int solution(int a, int b, bool flag){   
    return (flag == true) ? a+b : a-b;
}

int main(){
    int answer = 0;
    answer = solution(1,2,false);
    cout << answer;
    return 0;
}