#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int temp = n;
    answer.push_back(temp);
    while(temp != 1){
        temp = (temp%2 == 0) ? temp/2 : temp*3 + 1;
        answer.push_back(temp);
    }
    return answer;
}

int main(){
    vector<int> answer = solution(999);
    for(const int& I : answer){
        cout << I << ",";
    }
    return 0;
}