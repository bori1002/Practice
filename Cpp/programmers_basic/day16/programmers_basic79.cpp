//day16 A강조하기
#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(const char myChar :  myString){
        if(myChar == 'a' || myChar == 'A'){answer.push_back('A');}
        else if(myChar <= 90 && myChar >= 65){answer.push_back(myChar + 32);}
        else {answer.push_back(myChar);}
    }
    return answer;
}