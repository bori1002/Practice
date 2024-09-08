#include <iostream>

using namespace std;

int main(){
    //점의 좌표를 받아 그 점이 어느 사분면에 속하는지 출력, x, y 모두 양수 혹은 음수인 정수
    int x = 0, y = 0;
    short quadrant = 0;

    cin >> x;
    cin >> y;

    if(y > 0){
        if(x > 0){quadrant = 1;}
        else if(x < 0){quadrant = 2;}
    }
    else if(y < 0){
        if(x < 0){quadrant =  3;}
        else if(x > 0){quadrant = 4;}
    }
    else{return -1;}

    cout << quadrant;

    return 0;
}