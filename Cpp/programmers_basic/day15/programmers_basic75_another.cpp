//day15 원하는 문자열 찾기
//이게 훨씬 간단하고 좋네
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(string myString, string pat) {
    if(myString.size() < pat.size()){return 0;}
    for(int i = 0; i < myString.size(); i++){if(myString[i] < 97){myString[i] += 32;}}
    for(int j = 0; j < pat.size(); j++){if(pat[j] < 97){pat[j] += 32;}}
    // find함수는 특정 문자열을 찾는 함수로 해당 문자열이 존재하지 않는다면 string::npos를 반환한다.
    if(myString.find(pat) != string::npos){return 1;}
    else{return 0;}
}

int main(){
    cout << solution("AbCdEfG", "abcdeg");
    return 0;
}