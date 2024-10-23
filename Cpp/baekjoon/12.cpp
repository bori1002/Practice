#include <iostream>
#include <vector>

using namespace std;

int main(){
    int loopCount = 0;
    vector<int> answer;
    cin >> loopCount;
    for(int i = 0; i < loopCount; i++){
        int a = 0, b = 0;
        cin >> a >> b;
        answer.push_back(a+b);
    }
    for(const int ans : answer){
        cout << ans << endl;
    }
    return 0;
}