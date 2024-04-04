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

int main(){
    int answer = 0;
    std::cout << solution({5,7,8,3});

    return 0;
}