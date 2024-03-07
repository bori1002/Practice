#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<char> str = {};
    string input;

    cin >> input;

    for(int i = 0; i < input.length(); i++){
        if(i >= 10) break;

        str.push_back(input[i]);
    }

    for(const char msg : str){
        cout << msg << endl;
    }

    return 0;
}