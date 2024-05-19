//day11 문자 개수 세기
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    for(int i = 1; i <= n; i++){
        if(i % k == 0){answer.push_back(i);}
    }
    sort(answer.begin(), answer.end());
    return answer;
}

int main(){
    for(const int num : solution(10,3)){
        cout << num << ",";
    }
    return 0;
}

