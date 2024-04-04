#include <iostream>
#include <string>

using namespace std;

int solution(int n, string control){
    int answer = n;
    
    for(const char& C : control){
        if(C == 'w'){answer += 1;}
        else if(C == 's'){answer -= 1;}
        else if(C == 'd'){answer += 10;}
        else if(C == 'a'){answer -= 10;}
    }

    return answer;
}

int main(){
    int answer = solution(0, "wsdawsdassw");
    cout << answer;
    return 0;
}