#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer = arr;
    for(const vector<int>& query : queries){
        int s = query[0];
        int e = query[1];
        int k = query[2];
        vector<int> temp;
        for(int i = s; i <= e; i++){
            if(i % k == 0){
                answer[i] += 1;
            }
        }
    }
    return answer;
}

int main(){
    vector<int> answer = solution({0, 1, 2, 4, 3}, {{0, 4, 1}, {0, 3, 2},
                                {0, 3, 3}});
    for(const int& I : answer){
        cout << I << ",";
    }
    return 0;
}