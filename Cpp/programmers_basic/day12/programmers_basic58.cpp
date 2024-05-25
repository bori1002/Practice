//day12 배열 만들기 3
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> answer;
    for(int i = intervals[0][0]; i <= intervals[0][1]; i++){
        answer.push_back(arr[i]);
    }
    for(int j = intervals[1][0]; j <= intervals[1][1]; j++){
        answer.push_back(arr[j]);
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