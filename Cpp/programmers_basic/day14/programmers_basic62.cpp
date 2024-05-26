//day14 5명씩
#include <iostream>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;
    int i = 0;
    for(i = 0; i < names.size(); i += 5){
        answer.push_back(names[i]);
    }
    return answer;
}

int main(){
    for(const string name : solution({"nami", "ahri", "jayce", "garen", "ivern", "vex", "jinx"})){
        cout << name << ",";
    }
    return 0;
}