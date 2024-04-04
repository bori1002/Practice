#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(vector<int> num_list){
    string odd_nums = "";
    string even_nums = "";

    for(const int& num : num_list){
        if(num % 2 == 1) odd_nums += to_string(num);
        else if(num % 2 == 0) even_nums += to_string(num);
    }

    return stoi(odd_nums) + stoi(even_nums);
}

int main(){
    int answer = 0;
    cout << solution({5,7,8,3});
    return 0;
}