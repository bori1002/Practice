//day11 문자 개수 세기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(const char my_char : my_string){
        int ascii = my_char;
        int index = 0;
        if(ascii <= 90) {index = ascii - 65;}
        else if(ascii > 90) {index = ascii - 71;}
        answer[index] += 1;
    }
    return answer;
}

int main(){
    for(const int num : solution("Programmers")){
        cout << num << ",";
    }
    return 0;
}

