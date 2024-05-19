//day6 마지막 두 원소
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