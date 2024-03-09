#include <iostream>
#include <string>

using namespace std;

int solution(const int a, const int b){
    int answer = 0;
    int temp1 = 0;
    int temp2 = 0;
    string intToString1 = "";
    string intToString2 = "";

    intToString1 = (to_string(a));
    intToString1 = intToString1 + (to_string(b));
    intToString2 = (to_string(b));
    intToString2 = intToString2 + (to_string(a));
    
    temp1 = stoi(intToString1);
    temp2 = stoi(intToString2);

    answer = (temp1 < temp2) ? temp2 : temp1;
    return answer;
}

int main(){
    int answer = 0;
    answer = solution(23,4564);
    cout << answer;
    return 0;
}