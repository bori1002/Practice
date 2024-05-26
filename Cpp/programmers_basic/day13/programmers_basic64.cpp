//day13 n번째 원소까지
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    for(int i = 0; i < n; i++){
        answer.push_back(num_list[i]);
    }
    return answer;
}

int main(){
    vector<int> answer = solution({2,1,6}, 1);
    for(const int num : answer){
        cout << num << ",";
    }
    return 0;
}