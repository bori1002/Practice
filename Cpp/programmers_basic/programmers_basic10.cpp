#include <iostream>

using namespace std;

string solution(const string str1 = "", const string str2 = ""){
    string answer = "";
    string temp1 = {};
    int str1_len = str1.length();
    int str2_len = str2.length();
    int len = str1_len + str2_len;

    for(int i = 0; i < len; i++){
        if(i < str1_len){
            temp1.push_back(str1[i]);
        }
        if(i < str2_len){
            temp1.push_back(str2[i]);
        }
    }

    for(const char temp2 : temp1){
        answer.push_back(temp2);
    }

    return answer;
}



int main(){
    string answer = "";
    answer = solution("aaaaaaa", "bbbbb");
    cout << answer;
    return 0;
}