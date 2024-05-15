//day9 문자열의 뒤의 n글자
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    string temp = "";
    for(int i = 0; i < n; i++){
        temp.push_back((*(my_string.rbegin()+i)));
    }
    for(auto i = temp.rbegin(); i != temp.rend(); i++){
        answer.push_back(*i); 
    }
    return answer;
}

int main(){
    string answer = solution("ProgrammerS123", 11);
    cout << answer;
    return 0;
}

