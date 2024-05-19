//day5 원소들의 곱과 합
#include <iostream>
#include <vector>

int solution(std::vector<int> num_list){
    int sum = 0;
    int product = 1;

    for(const int& num : num_list){
        sum += num;
        product *= num;
    }
    return (sum*sum > product) ? 1 : 0;
}