//day14 수열과 구간 쿼리 1
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(vector<int> query : queries){
        int i = query[0];
        for(i; i <= query[1]; i++){
            arr[i] += 1;
        }
    }
    answer = arr;
    return answer;
}

int main(){
    return 0;
}