#include <iostream>

using namespace std;

int main(){
    int a, b;
    int c ,d, e, f;

    cin >> a >> b;

    c = (b%10);
    d = ((b%100)-c)/10;
    e = b/100;
    f = a * b;

    cout << a * c << endl
        << a * d << endl
        << a * e << endl
        << f;

    return 0;
}