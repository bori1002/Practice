//day10 세로읽기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    for(int i = 0; i < my_string.length(); i+=m){
        answer.push_back(my_string[i + (c-1)]);
    }
    return answer;
}

int main(){
    cout << solution("ihrhbakrfpndopljhygc", 4, 2);
    return 0;
}

