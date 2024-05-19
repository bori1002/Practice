//day2 홀짝 구분하기
#include <iostream>

using namespace std;

int main(){
    int n = 0;

    cin >> n;

    if (n % 2 == 0) cout << n << " is even";
    else if (n % 2 == 1) cout << n << " is odd";
    else{ 
        cout << "error"; 
        return -1;
    }
    return 0;
}