//day15 조건에 맞게 수열 변환하기 2
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    while(1){
        vector<int> temp = {};
        for(const int num : arr){
            if((num >= 50) && (num % 2 == 0)){
                temp.push_back(num/2);
            }
            else if((num < 50) && (num % 2 != 0)){
                temp.push_back(num*2 + 1);
            } 
            else{
                temp.push_back(num);
            }
        }
        if(arr == temp){return answer;}
        answer++;
        arr = temp;
    }
}

int main(){
    cout << solution({1,2,3,100,99,98});
    return 0;
}