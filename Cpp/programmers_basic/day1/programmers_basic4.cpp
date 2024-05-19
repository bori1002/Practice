//day1 대소문자 반복해서 출력하기
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main() {
    string str = "";
    cin >> str;

    if(str.length() < 1 || str.length() > 20){
        return -1;
        }
    
    vector<char> alphabet(str.begin(), str.end());

    for(char msg : alphabet){
        if(isupper(msg)){
            cout << char(tolower(msg));
        }
        else if(islower(msg)){
            cout << char(toupper(msg));
        }
    }
    
    return 0;
}