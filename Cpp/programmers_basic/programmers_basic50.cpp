//day11 카운트 다운
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int start, int end_num) {
    vector<int> answer;
    for(int i = start; i >= end_num; i--){
        answer.push_back(i);
    }
    return answer;
}

int main(){
    vector<int> answer = solution(10, 3);
    for(const int num : answer){cout << num;}
    return 0;
}