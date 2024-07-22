//day16 특정한 문자를 대문자로 바꾸기
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    string answer = my_string;
    int i = 0;
    for(const char myChar : my_string){
        for(const char myAlp : alp){
            answer[i] = myChar == myAlp ? myChar - 32 : myChar;
        }
        i++;
    }
    return answer;
}