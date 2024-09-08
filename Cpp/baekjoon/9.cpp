#include <iostream>

using namespace std;

int main(){
    unsigned short result[3] = {};
    unsigned short prize = 0;
    cin >> result[0] >> result[1] >> result[2];
    //같은 눈 3개 10,000 + (같은 눈 * 1,000) 원
    if(result[0] == result[1] && result[1] == result[2]){prize = 10000 + result[0]*1000;}
    //같은 눈 2개 1,000 + (같은 눈 * 100 )원
    else if(result[0] == result[1] || result[0] == result[2] || result[1] == result[2]){
        if(result[0] == result[1]){prize = 1000 + result[0] * 100;}
        else if(result[0] == result[2]){prize = 1000 + result[0] * 100;}
        else if(result[1] == result[2]){prize = 1000 + result[2] * 100;}
    }
    //모두 다른 눈 그 중 가장 큰 눈 * 100원
    else{
        unsigned short temp = result[0] > result[1] ? result [0] : result[1];
        unsigned short max = result[2] > temp ? result[2] : temp;
        prize = max * 100;
    }
    cout << prize;
    return 0;
}