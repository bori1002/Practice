//day11 글자지우기
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = my_string;
    sort(indices.begin(), indices.end());
    auto it = answer.begin();
    int count = 0; //count loop
    for(const int index : indices ){
        answer.erase(it + index - count);
        count++;
        // cout << answer << endl;
    }
    return answer;
}

int main(){
    string answer = solution("apporoograpemmemprs",{1, 16, 6, 15, 0, 10, 11, 3});
    cout << answer;
    return 0;
}

