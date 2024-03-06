#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<string> helloworld{
        "hello", "world!"
    };

    for(const string& msg : helloworld){
        cout << msg << " ";
    };
}