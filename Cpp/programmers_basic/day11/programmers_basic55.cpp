//day11 가까운 1 찾기
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int answer = -1;
    for(int i = idx; i < arr.size(); i++){
        if(arr[i] == 1){
            answer = i;
            break;
        }
    }
    return answer;
}

int main(){
    cout << solution({0, 0, 0, 1}, 1);
    
    return 0;
}