#include <iostream>
#include <vector>

using namespace std;

int solution(const int a, const int d, vector<bool> included){
    int answer = 0;
    int idx = 0;
    for(const bool includes : included){
        answer += (includes == 1) ? (a + d*idx) : 0;
        idx++;
    }
    return answer;
}

int main(){
    int answer = 0;
    vector<bool> included = {1, 0, 0 ,1, 1};
    cout << solution(3, 4, included);

    return 0;
}