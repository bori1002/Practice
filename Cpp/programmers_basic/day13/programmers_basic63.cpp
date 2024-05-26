//day13 왼쪽 오른쪽
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer = {};
    auto left = find(str_list.begin(), str_list.end(), "l");
    auto right = find(str_list.begin(), str_list.end(), "r");

    if(left != str_list.end() && left < right){
        answer.assign(str_list.begin(), left);
    }
    else if(right != str_list.end() && right < left){
        answer.assign(right+1, str_list.end());
    }
    return answer;
}

int main(){
    vector<string> answer = solution({"r", "u", "l", "r"});
    for(const string str : answer){
        cout << str << ",";
    }
    return 0;
}