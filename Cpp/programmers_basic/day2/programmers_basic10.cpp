//day2 문자열 겹쳐쓰기
#include <iostream>

using namespace std;

string solution(string my_string, string overwirte_string, int s){
    string answer = "";

    if((overwirte_string.length() > my_string.length()) || (overwirte_string.length() < 1) || (my_string.length() > 1000)){
        return "error";
    }

    string temp_my = my_string;
    string temp_overwirte = overwirte_string;

    for(int i = 0; i < overwirte_string.length(); i++){
        temp_my[s + i] = temp_overwirte[i];
    }

    answer = temp_my;

    return answer;
}



int main(){
    string answer = "";
    answer = solution("he11oWor1d", "lloWorl", 2);
    cout << answer;
    return 0;
}