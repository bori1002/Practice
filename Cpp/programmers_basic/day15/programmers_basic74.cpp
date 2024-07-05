//day15 길이에 따른 연산
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    if(arr.size() >= 11){
        for(const int num : arr){
            answer += num;
        }
    }
    else if(arr.size() < 11){
        answer = 1;
        for(const int num : arr){
            answer *= num;
        }
    }
    return answer;
}

int main(){
    cout << solution({2, 3, 4, 5});
    return 0;
}