//day15 원하는 문자열 찾기
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(string myString, string pat) {
    string temp{};
    //myString 이 pat보다 짧을 경우 같은 경우의 수가 없으므로 바로 0 return
    if(myString.size() < pat.size()){
        return 0;
    }
    for(const char chr : pat){
        int asciVal = static_cast<int>(chr);
        if(asciVal < 97 && asciVal > 64){
            temp.push_back(static_cast<char>(asciVal+32));
        }
        else{
            temp.push_back(chr);
        }
    }
    pat = temp;
    for(int i = 0; i <= myString.size() - pat.size(); i++){
        auto it = myString.begin() + i;
        temp = {};
        for(int j = 0; j < pat.size(); j++){
            int asciVal = static_cast<int>(*(it+j));
            if(asciVal < 97 && asciVal > 64){
                temp.push_back(static_cast<char>(asciVal+32));
            }
            else{
                temp.push_back(*(it+j));
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