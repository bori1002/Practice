#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

string solution(vector<string> arr){
    string answer = "";

    if(arr.size() < 1 || arr.size() > 200){
        cout << "array length is too long or too short\n";
    }    

    for(const string temp : arr){
        string temp1 = "";
        for (const char temp2 : temp){
            temp1.push_back(char(tolower(temp2)));
        }
        answer = answer + temp1;
    }

    return answer;
}



int main(){
    string answer = "";
    answer = solution({"hello","world","by c++"});
    cout << answer;
    return 0;
}