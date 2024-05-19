//day7 수열과 구간 쿼리4 
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
    vector<int> answer = solution({0, 2, 3, 5, 4, 7, 4}, {{0, 4, 2}, {0, 3, 2},
                                {0, 2, 2}});
    for(const int& I : answer){
        cout << I << ",";
    }
    return 0;
}