//day5 코드처리하기 
#include <iostream>

using namespace std;

string solution(string code){   
    string answer = "";
    string ret = "";
    bool mode = 0;
    int idx = 0;
    for(const char& read_code : code){
        if(mode == 0){
            if(read_code != '1' && idx % 2 == 0) ret.push_back(read_code);
            else if(read_code == '1') mode = 1;
        }
        else if(mode == 1){
            if(read_code != '1' && idx % 2 == 1) ret.push_back(read_code);
            else if(read_code == '1') mode = 0;
        }   
        idx++;
    }
    answer = (ret != "") ? ret : "EMPTY";
    return answer;
}