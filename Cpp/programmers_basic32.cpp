#include <iostream>
#include <vector>

using namespace std;

int min_num(vector<int> num_list){
    int temp = num_list[0];
    int minValue = 0;
    for(const int& num : num_list){
        temp = (temp > num) ? num : temp; 
    }
    minValue = temp;
    return minValue;
}

int solution(int a, int b, int c, int d){
    int answer = 0;
    vector<int> num_list = {a, b, c, d}; 
    vector<bool> CASE;

    if(a == b){
        CASE.push_back(1);
    }
    else if(a != b){
        CASE.push_back(0);
    }

    if(a == c){
        CASE.push_back(1);
    }
    else if(a != c){
        CASE.push_back(0);
    }

    if(a == d){
        CASE.push_back(1);
    }
    else if(a != d){
        CASE.push_back(0);
    }

    if(b == c){
        CASE.push_back(1);
    }
    else if(b != c){
        CASE.push_back(0);
    }

    if(b == d){
        CASE.push_back(1);
    }
    else if(b != d){
        CASE.push_back(0);
    }

    if(c == d){
        CASE.push_back(1);
    }
    else if(c != d){
        CASE.push_back(0);
    }

    return answer;
}

int main(){
    int answer = solution(true, false, false, false);
    cout << answer;
    return 0;
}