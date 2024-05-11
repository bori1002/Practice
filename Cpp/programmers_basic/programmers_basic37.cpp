//day9 배열만들기 5
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for(const string str : intStrs){
        string temp = "";
        for(int i = s; i < s+l; i++){
            temp.push_back(str[i]); 
        }
        int num = stoi(temp);
        if(num > k){answer.push_back(num);}
    }

    return answer;
}

int main(){
    vector<int> answer = solution({"0123456789","9876543210","9999999999999"}, 50000, 5, 5);
    for(const int result : answer){
        cout << result;
    }
    return 0;
}

