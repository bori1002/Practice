//day7 배열만들기 2
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    string num_s;

    for(int i = l; i <= r; i++){
        string temp = "";
        num_s = to_string(i);
        for(const char& C : num_s){
            if(C == '5' || C == '0'){
                temp.push_back(C);
            }
            else{
                temp = "";
                break;
            }
        }

        if(!temp.empty()){
            int num = stoi(temp);
            answer.push_back(num);
        }
    }
    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}

int main(){
    vector<int> answer = solution({0, 1, 2, 4, 3}, {{0, 4, 1}, {0, 3, 2},
                                {0, 3, 3}});
    for(const int& I : answer){
        cout << I << ",";
    }
    return 0;
}