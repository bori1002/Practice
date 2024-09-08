#include <iostream>

using namespace std;

int main(){
    int a = 0, b = 0;
    //첫째 줄에 A와 B가 주어진다. A와 B는 공백 한 칸으로 구분되어져 있다.
    cin >> a >> b;

    //첫째 줄에 다음 세가지 중 하나를 출력한다.
    //A가 B보다 큰경우에는 '>'를 출력한다.
    if(a > b){cout << '>';}
    //A가 B보다 작은 경우에는 '<'를 출력한다.
    else if(a < b){cout << '<';}
    //A와 B가 같은 경우에는 '=='를 출력한다.
    else if(a == b){cout << "==";}

    return 0;
}