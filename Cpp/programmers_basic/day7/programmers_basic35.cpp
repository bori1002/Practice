//day7 배열 만들기 4
#include <vector>

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