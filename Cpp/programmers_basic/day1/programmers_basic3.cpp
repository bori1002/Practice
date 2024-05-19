//day1 문자열 반복해서 출력하기
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "";
    int n = 0;

    cin >> str >> n;

    // if(str.length() < 1 || str.length() > 10 || n < 1 || n > 5){return -1;}
    
    for(int i = 0; i < n; i++)
    {
        cout << str;
    }
    

    
    return 0;
}