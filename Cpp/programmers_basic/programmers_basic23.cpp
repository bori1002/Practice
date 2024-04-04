#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list){
    vector<int> answer = num_list;
    answer.push_back(
        (num_list[num_list.size() - 1] > num_list[num_list.size() - 2]) 
        ? (num_list[num_list.size() - 1] - num_list[num_list.size() - 2]) 
        : (num_list[num_list.size() - 1] * 2)
        );
    return answer;
}

int main(){
    vector<int> answer = solution({5,2,1,7,5});
    for(const int& msg : answer){
        cout << msg << ",";
    }
    return 0;
}