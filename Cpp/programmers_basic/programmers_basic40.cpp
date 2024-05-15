//day9 문자열의 뒤의 n글자
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp = "";
    for(auto i = my_string.rbegin(); i != my_string.rend(); i++){
        string buf = "";
        temp.push_back(*i);
        for(auto j = temp.rbegin(); j != temp.rend(); j++){
            buf.push_back(*j);
        }
        answer.push_back(buf);
    }
    sort(answer.begin(), answer.end());
    return answer;
}

int main(){
    vector<string> answer = solution("banana");
    for(const string S : answer){    
        cout << S << endl;
    }
    return 0;
}

