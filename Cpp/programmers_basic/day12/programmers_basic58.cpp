//day12 리스트 자르기
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for(int i = intervals[0][0]; i <= intervals[0][2]; i++){
        answer.push_back(arr[i]);
    }
    for(int i = intervals[1][0]; i <= intervals[1][2]; i++){
        answer.push_back(arr[i]);
    }
    return answer;
}

int main(){
    vector<int> answer = solution({1, 2, 3, 4, 5}, {{1, 3}, {0, 4}});
    for(const int num : answer){
        cout << num << endl;
    }
    return 0;
}