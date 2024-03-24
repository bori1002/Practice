#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog){
    string answer = "";
    vector<int> temp = numLog;
    
    for (int i = 0; i < numLog.size(); i++){
        switch (temp[i+1]-temp[i]){
            case 1:
                answer.push_back('w');
                break;
            case -1:
                answer.push_back('s');
                break;
            case 10:
                answer.push_back('d');
                break;
            case -10:
                answer.push_back('a');
                break;
        }
    }

    return answer;
}

int main(){
    string answer = solution({0, 1, 0, 10, 0, 1, 0, 10, 0, -1, -2, -1});
    cout << answer;
    return 0;
}