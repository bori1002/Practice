//day9 부분 문자열 이어붙여 문자열 만들기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    
    for(int i = 0; i < my_strings.size(); i++){
        string temp = "";
        for(int j = parts[i][0]; j <= parts[i][1];j ++){
            temp.push_back(my_strings[i][j]);
        }
        answer += temp;
    }
    return answer;
}

int main(){
    string answer = solution({"progressive", "hamburger", "hammer", "ahocorasick"}, {{0, 4}, {1, 2}, {3, 5}, {7, 7}});
    cout << answer;
    return 0;
}

