//day9 문자열의 뒤의 n글자
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp = "";
    for(auto i = my_string.rbegin(); i != my_string.rend(); i++){
        string buf = "";
        buf.push_back(*i);
        for(auto j = buf.rbegin(); j != buf.rend(); j++){
            temp.push_back(*j);
        }
        answer.push_back(temp); 
    }
}

int main(){
    string answer = solution("ProgrammerS123", 11);
    cout << answer;
    return 0;
}

