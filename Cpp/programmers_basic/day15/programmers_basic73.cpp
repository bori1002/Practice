//day15 1로만들기
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    int check = 0;
    while(check != arr.size()){
        vector<int> temp = {};
        check = 0;
        for(const int num : arr){
            if(num == 1){
                temp.push_back(num);
                check++;
            }
            else if(num % 2 == 0){
                temp.push_back(num/2);
                answer++;
            }
            else if(num % 2 != 0){
                temp.push_back((num - 1)/2);
                answer++;
            }
            cout << check << endl;
        }
        arr = temp;
    }
    return answer;
}

int main(){
    cout << solution({12, 4, 15, 1, 14});
    return 0;
}