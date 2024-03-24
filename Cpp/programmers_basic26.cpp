#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    for(const vector<int>& query : queries){
        int i = query[0];
        int j = query[1];
        int temp  = answer[i];
        answer[i] = answer[j];
        answer[j] = temp;
    }
    return answer;
}

int main(){
    vector<int> answer = solution({0, 1, 2, 3, 4}, {{0, 3}, {1, 2}, {1, 4}});
    for(const int& I : answer){
        cout << I << ",";
    }
    return 0;
}