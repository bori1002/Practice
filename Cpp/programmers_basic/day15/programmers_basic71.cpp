//day15 수열과 구간 쿼리 1
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    for(const int num : arr)
    {
        if((num >= 50) && (num % 2 == 0))
        {
            answer.push_back(num/2);
        }
        else if((num < 50) && (num % 2 == 1))
        {
            answer.push_back(num*2);
        } 
        else
        {
            answer.push_back(num);
        }
        
    }
    return answer;
}

int main(){
    return 0;
}