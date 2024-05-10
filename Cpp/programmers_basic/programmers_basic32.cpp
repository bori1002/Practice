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