//day12 배열조각하기
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> answer;
    vector<int> temp = arr;
    for(int i = 0; i < query.size(); i++){
        if(i % 2 == 0){
            vector<int> new_temp = temp;
            for(int j = (temp.size()-1); j > query[i]; j--){
                new_temp.pop_back();
            }
            temp = new_temp;
        }
        else{
            vector<int> new_temp = temp;
            for(int j = 0; j < query[i]; j++){
                new_temp.erase(new_temp.begin());
            }
            temp = new_temp;
        }
    }
    answer = temp;
    return answer;
}

int main(){
    vector<int> answer = solution({0,1,2,3,4,5}, {4,1,2});
    for(const int num : answer){
        cout << num << endl;
    }
    return 0;
}