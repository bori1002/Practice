//day10 문자열 뒤집기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = my_string.substr(0, s);
    string buf = e > s ? my_string.substr(s, e-s+1) : my_string.substr(s, s-e+1);
    for(auto i = buf.rbegin(); i != buf.rend(); i++){
        answer.push_back(*i);
    }
    for(const char my_char : my_string.substr(e+1, my_string.length())){
        answer.push_back(my_char);
    }
    return answer;
}

int main(){
    cout << solution("Progra21Sremm3", 6, 12);
    return 0;
}

