#include <iostream>
#include <vector>

using namespace std;
                    
bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    bool temp1 = true;
    bool temp2 = true;
    temp1 = (x1 == x2) ? x1 : true;
    temp2 = (x3 == x4) ? x3 : true;
    answer = (temp1 == temp2) ? temp1 : false;
    return answer;
}

int main(){
    bool answer = solution(true, false, false, false);
    cout << answer;
    return 0;
}