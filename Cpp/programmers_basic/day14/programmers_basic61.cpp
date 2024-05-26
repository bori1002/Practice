//day14 홀수 vs 짝수
#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int i = 0, odd = 0, even = 0;
    for(i = 0; i < num_list.size(); i++){
        if(i % 2 == 0){//홀수번째
            odd += num_list[i];
        }
        else if(i % 2 == 1){
            even += num_list[i];
        }
    }
    answer = odd > even ? odd : even;
    return answer;
}

int main(){
    cout << solution({2, 1, 6});
    return 0;
}