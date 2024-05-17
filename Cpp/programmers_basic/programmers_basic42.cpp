//day10 접미사인지 확인하기
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string my_string, string is_suffix) {
    if(my_string.length() < is_suffix.length()){
        return 0;
    }
    else{
        string buf = my_string.substr(my_string.length() - is_suffix.length());
        int answer = buf == is_suffix ? 1 : 0;
        return answer;
    }
}

int main(){
    int answer = solution("banana","nan");
    cout << answer;
    return 0;
}

