#include <iostream>
#include <vector>

using namespace std;

int case1(int p){
    return 1111 * p;
}
int case2(int p, int q){
    return (10 * p + q) * (10 * p + q);
}
int case3(int p, int q){
    if(p > q){
        return (p + q) * (p - q);
    }
    else if( p < q){
        return (p + q) * (q - p);
    }
}
int case4(int q, int r){
    return q * r;
}
int case5(int a, int b, int c, int d){
    vector<int> num_list = {a, b, c, d};
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
    int checkpoint = 0;
    vector<vector<int>> numlist = {{a, b}, {a, c}, {a, d}, {b, c}, {b, d}, {c, d}};
    for(vector<int> num : numlist){
        if(num[0] == num[1])
    }

    return answer;
}

int main(){
    int answer = solution(true, false, false, false);
    cout << answer;
    return 0;
}