#include <iostream>
#include <string>
#include <map>//isp, icp를 위해
#include <vector>//pair사용을 위해, pair 헤더파일이 vector에 이미 포함되어있음

usi ng namespace std;

int main(){
    string input = "1+2*3+(4+5)/6"; // 입력식
    string postfix = "";
    map<char, pair<int, int>> ispicp = {
        {')', {NULL,NULL}}
    };

    //cout << input;

    //전처리
    for(char temp : input){
        if(temp == '*' || '/'){
            
        }
    }
}