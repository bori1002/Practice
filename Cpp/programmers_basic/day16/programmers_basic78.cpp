//day16 배열에서 문자열 대소문자 변환하기
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string convert(string myString, bool odd){
    string result = myString;
    for(int i = 0; i < myString.size(); i++){
        if(odd == 0){result[i] = myString[i] < 97 ? myString[i] + 32 : myString[i];}
        else if(odd == 1){result[i] = myString[i] >= 97 ? myString[i] - 32 : myString[i];}
    }
    return result;
}

vector<string> solution(vector<string> strArr){
    vector<string> answer;
    int i = 0;
    for(const string str : strArr){
        answer.push_back(convert(str, i%2));
        i++;
    }
    return answer;
}