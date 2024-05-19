//day3 문자열 곱하기
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string solution(const string my_string = "", const int k = 1){
    string answer = "";
    string temp1 = "";
    if( k < 1 || k > 100) return 0;
    
    // for(const char& temp2 : my_string){
    //     temp1.push_back(tolower(temp2));
    // }

    for(int i = 0; i < k; i++){
        answer = answer + my_string;
    }
    return answer;
}



int main(){
    string answer = "";
    answer = solution("aaaaaaa", "bbbbb");
    cout << answer;
    return 0;
}