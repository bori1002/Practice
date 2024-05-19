//day5 등차수열의 특정한 향만 더하기
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