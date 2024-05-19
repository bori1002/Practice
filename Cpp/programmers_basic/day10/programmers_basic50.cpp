//day10 qr code
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    for(int index = 0; index < code.length(); index++){
        if(index % q == r){answer.push_back(code[index]);}
    }
    return answer;
}

int main(){
    cout << solution(3, 1, "qjnwezgrpirldywt");
    return 0;
}

