//Day 8 주사위 게임 3
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
    else if(p < q){
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

int solution(int a, int b, int c, int d) {
    if(a == b && b == c && c == d){
        return case1(a);
    }
    else if((a == b && b == c) || (a == b && a == d) || (b == c && c == d) || (a == c && c == d)){
        if((a == b) && (b == c)) return case2(a,d);
        else if((a == b) && (a == d)) return case2(a,c);
        else if((b == c) && (c == d))return case2(b,a);
        else if((a == c) && (c == d))return case2(a,b);
    }
    else if((a == b && c == d) || (a == c && b == d) || (a == d && b == c)){
        if(a == b && c == d) return case3(a, c);
        else if(a == c && b == d) return case3(a, b);
        else if(a == d && b == c) return case3(a, b);
    }
    else if(a == b || a == c || a == d || b == c || b == d || c == d){
        if(a == b) return case4(c, d);
        else if(a == c) return case4(b, d);
        else if(a == d) return case4(b, c);
        else if(b == c) return case4(a, d);
        else if(b == d) return case4(a, c);
        else if(c == d) return case4(a, b);
    }
    else{
        return case5(a, b, c, d);
    }
}

int main(){
    int answer = solution(4, 1, 4, 4);
    cout << answer;
    return 0;
}

//BEST ANSWER
// #include <string>
// #include <vector>
// #include <cmath>
// #include <algorithm>

// using namespace std;
// int solution(int a, int b, int c, int d) {
//     int answer = 0;

//     vector<int> table(6);
//     table[a-1]++;    table[b-1]++;    table[c-1]++;    table[d-1]++;
//     vector<vector<int>> nums(5);    
//     nums[table[0]].emplace_back(1);
//     nums[table[1]].emplace_back(2);
//     nums[table[2]].emplace_back(3);
//     nums[table[3]].emplace_back(4);
//     nums[table[4]].emplace_back(5);
//     nums[table[5]].emplace_back(6);

//     if(!nums[4].empty())    
//     {
//         return 1111*nums[4][0];
//     }
//     else if(!nums[3].empty())    
//     {
//         return pow(10*nums[3][0]+nums[1][0],2);
//     }
//     else if(nums[2].size() == 2)    
//     {
//         return (nums[2][0]+nums[2][1])*abs(nums[2][0]-nums[2][1]);
//     }
//     else if(nums[2].size() == 1)
//     {
//         return nums[1][0]*nums[1][1];
//     }
//     else
//     {
//         return *min_element(nums[1].begin(),nums[1].end());
//     }

//     return answer;
// }