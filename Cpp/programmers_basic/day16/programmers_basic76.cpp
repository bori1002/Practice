//day16 대문자로 바꾸기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = myString;
    for(int i = 0; i < myString.size(); i++){answer[i] = myString[i] >= 97 ? myString[i] - 32 : myString[i];}
    return answer;
}

int main(){
    cout << solution("aBcDeFg");
    return 0;
}