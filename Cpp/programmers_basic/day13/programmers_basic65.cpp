//day13 n개 간격의 원소들
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    int i = 0;
    for(i = 0; i < num_list.size(); i+n){
        answer.push_back(num_list[i]);
    }
    return answer;
}

int main(){
    vector<int> answer = solution({4, 2, 6, 1, 7, 6}, 2);
    for(const int num : answer){
        cout << num << ",";
    }
    return 0;
}