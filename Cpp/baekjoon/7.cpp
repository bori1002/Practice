#include <iostream>

using namespace std;

int main(){
    //연도가 주어졌을때 윤년 1, 나머지 0, 윤년은 연도가 4의 배수이면서 100의 배수가 아닐때 또는 400의 배수일때.
    bool leap = 0;
    unsigned int year = 1;

    cin >> year;

    if((year%4 == 0 && year%100 != 0) || year%400 == 0){leap = 1;}
    
    cout << leap;

    return 0;
}