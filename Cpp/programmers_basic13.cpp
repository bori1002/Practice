#include <iostream>
#include <string>

using namespace std;

int solution(const int a, const int b){
    int answer = 0;
    int temp1 = 0;
    int temp2 = temp2 = 2*a*b;
    string intToString1 = "";

    intToString1 = (to_string(a));
    intToString1 = intToString1 + (to_string(b));
    temp1 = stoi(intToString1);

    answer = (temp1 < temp2) ? temp2 : temp1;
    return answer;
}

int main(){
    int answer = 0;
    answer = solution(23,4564);
    cout << answer;
    return 0;
}