#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    for(const vector<int> query : queries){
        int i = 0;
        for(int s = query[0]; s <= query[1]; s++){
            if(s >= query[1] - i) break;
            int temp = answer[s];
            answer[s] = answer[query[1] - i];
            answer[query[1] - i] = temp;
            i++;
        }
    }
    return answer;
}

int main(){
    string answer = solution("rermgorpsam", {{2, 3}, {0, 7}, {5, 9}, {6, 10}});
    cout << answer;
    return 0;
}