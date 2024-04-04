#include <iostream>
#include <vector>

using namespace std;

std::vector<int> solution(std::vector<int> arr) {
    std::vector<int> stk;
    int i = 0;
    while (i < arr.size()) {
        if (stk.empty() || stk.back() < arr[i]) {
            stk.push_back(arr[i]);
            i++;
        } else if (stk.back() >= arr[i]) {
            stk.pop_back();
        }
    }
    return stk;
}

int main(){
    vector<int> answer = solution({1,4,2,5,3});
    for(const int& I : answer){
        cout << I << ",";
    }
    return 0;
}