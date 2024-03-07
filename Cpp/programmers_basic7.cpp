#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> str = {};
    string input = "";

    for(int i = 0; i < 2; i++){
    cin >> input;
    str.push_back(input);
    }

    for(const string& msg : str){
        if(msg.length() < 1 || msg.length() > 10){
            cout << "string length is too long";
            return -1;
        }
        cout << msg;
    }

    return 0;
}