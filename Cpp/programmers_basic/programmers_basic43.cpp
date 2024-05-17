//day10 접두사인지 확인하기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = my_string.substr(0, is_prefix.length()) == is_prefix ? 1 : 0;
    return answer;
}

int main(){
    cout << solution("banana", "ban");
    return 0;
}

