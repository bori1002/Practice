//day8 9로 나눈 나머지
#include <iostream>
#include <string>

using namespace std;

int solution(string number){
    int answer = 0;
    int temp = 0;
    for(const char num : number){
        temp += num - '0';
    }
    answer = temp % 9;
    
    return answer;
}

int main(){
    int answer = solution("78720646226947352489");
    cout << answer;
    return 0;
}