//day14 n보다 커질 때까지 더하기
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(vector<int> numbers, int n) {
    int answer = 0;
    for(const int num : numbers){
        answer += num;
        if(answer > n){break;}
    }
    return answer;
}

int main(){
    for(const string name : solution({"nami", "ahri", "jayce", "garen", "ivern", "vex", "jinx"})){
        cout << name << ",";
    }
    return 0;
}