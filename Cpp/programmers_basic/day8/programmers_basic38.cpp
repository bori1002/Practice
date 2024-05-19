//day8 글자 이어 붙여 문자 만들기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list){
    string answer = "";
    
    for(const int& index : index_list){
        answer.push_back(my_string[index]);
    }
   
    return answer;
}

int main(){
    string answer = solution("cvsgiorszzzmrpaqpe", {16, 6, 5, 3, 12, 14, 11, 11, 17, 12, 7});
    cout << answer;
    return 0;
}