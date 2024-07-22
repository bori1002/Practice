//폰켓몬 고르기
#include <iostream>
#include <vector>

using namespace std;

vector<int> unique(vector<int> nums){
    vector<int> result = nums;
    for(int i = 0; i < result.size(); i++){
        for(int j = i+1; j < result.size(); j++)if(result[i] == result[j]){
            result.erase(result.begin()+j);
            j--;
        }
    }
    return result;
}

int solution(vector<int> nums){
    int answer = 0;
    vector<int> unique_nums = unique(nums);
    
    answer = unique_nums.size() < nums.size()/2 ? unique_nums.size() : nums.size()/2;
    return answer;
}

int main(){
    vector<int> nums = {3,3,3,2,2,2};
    vector<int> result = unique(nums);
    for(const int num:result){cout << num << ",";}
    return 0;
}