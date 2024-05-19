//day12 리스트 자르기
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int index = 0;
    for(const int num : num_list){
        if(num < 0){return index;}
        index++;
    }
    return -1;
}

int main(){
    cout << solution({12, 4, 15, 46, 38, -2, 15});
    return 0;
}