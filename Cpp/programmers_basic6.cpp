#include <iostream>

using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    cin >> a >> b;

    if(a < 1 || b > 100){
        return -1;
    }

    c = a + b;
    cout << a << " + " << b << " = " << c;

    return 0;
}