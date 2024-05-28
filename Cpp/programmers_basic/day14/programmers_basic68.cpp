//day14 할 일 목록
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> solution(vector<string> todo_list, vector<bool> finished) {
    vector<string> answer;
    int i = 0;
    for(int i = 0; i < todo_list.size(); i++){
        if(finished[i] == false){
            answer.push_back(todo_list[i]);
        }
    }
    return answer;
}

int main(){
    for(const string name : solution({"nami", "ahri", "jayce", "garen", "ivern", "vex", "jinx"})){
        cout << name << ",";
    }
    return 0;
}