//day6 수 조작하기 2
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog){
    string answer = "";
    vector<int> temp = numLog;
    
    for (int i = 0; i < numLog.size(); i++){
        if (temp[i+1]-temp[i] == 1){answer.push_back('w');}
        else if (temp[i+1]-temp[i] == -1){answer.push_back('s');}
        else if (temp[i+1]-temp[i] == 10){answer.push_back('d');}
        else if (temp[i+1]-temp[i] == -10){answer.push_back('a');}
    }

    return answer;
}