//day9 부분 문자열 이어붙여 문자열 만들기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    return answer;
}

int main(){
    vector<int> answer = solution({"0123456789","9876543210","9999999999999"}, 50000, 5, 5);
    for(const int result : answer){
        cout << result << endl;
    }
    return 0;
}

