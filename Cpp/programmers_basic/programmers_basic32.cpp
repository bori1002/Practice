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
    vector<vector<int>> same = {};
    vector<vector<int>> different = {};
    vector<vector<int>> numlist = {{a, b}, {a, c}, {a, d}, {b, c}, {b, d}, {c, d}};
    for(vector<int> num : numlist){
        if(num[0] == num[1]){
            checkpoint += 1;
            same.push_back({num[0], num[1]});
        }
        else if(num[0] != num[1]){
            different.push_back({num[0], num[1]});
        }
    }
    if(checkpoint == 6){
        answer = case1(same[0][0]);
    }
    else if(checkpoint == 3){
        int diff_num = (same[0][0] == different[0][0]) ? different[0][1] : different[0][0];
        answer = case2(same[0][0], diff_num);
    }

    return answer;
}

int main(){
    int answer = solution(true, false, false, false);
    cout << answer;
    return 0;
}