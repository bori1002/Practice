//day12 2의 영역
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> checkpoint = {};
    int i = 0;
    for(const int num : arr){
        if(num == 2){checkpoint.push_back(i);}
        i++;
    }
    if(checkpoint.size() == 0){
        return {-1};
    }
    else if(checkpoint.size() == 1){
        answer.push_back(arr[checkpoint[0]]);
    }
    else if(checkpoint.size() > 1){
        int lastNum = checkpoint.back();
        for(int j = checkpoint[0]; j <= lastNum; j++){
            answer.push_back(arr[j]);
        }
    }
    return answer;
}

int main(){
    vector<int> answer = solution({1, 2, 1, 4, 5, 2, 9});
    for(const int num : answer){
        cout << num << endl;
    }
    return 0;
}