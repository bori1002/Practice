#include <iostream>

using namespace std;

int main() {
    unsigned long long nums[3];
    unsigned long long answer = 0;
    cin >> nums[0] >> nums[1] >> nums[2];
    
    for(const unsigned long long num : nums){
        answer += num;
    }
    cout << answer;
    return 0;
}