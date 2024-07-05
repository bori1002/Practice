//day15 원하는 문자열 찾기
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(string myString, string pat) {
    string temp{};
    if(myString.size() < pat.size()){
        return 0;
    }
    for(const char chr : pat){
        int asciVal = static_cast<int>(chr);
        if(asciVal < 97 && asciVal > 64){
            temp.push_back(static_cast<char>(asciVal+32));
        }
    }
    pat = temp;
    for(auto it = myString.begin(); it != myString.end() - pat.size(); it++){
        temp = {};
        for(int i = 0; i < pat.size(); i++){
            int asciVal = static_cast<int>(*(it+i));
            if(asciVal < 97 && asciVal > 64){
                temp.push_back(static_cast<char>(asciVal+32));
            }
            else{
                temp.push_back(*(it+i));
            }
        }
        if(temp == pat){
            return 1;
        }
    }
    return 0;
}


int main(){
    cout << solution("AbCdEfG", "abcdefg");
    return 0;
}