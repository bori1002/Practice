#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
// #include <iostream>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    unordered_map <int, int> numMax;

    //주어진 숫자의 가장 첫번째자리 중 가장 큰 것을 찾아 그 순서대로 정렬한다. -> 해시 사용
    for(const int num : numbers){
        string number_str = to_string(num);
        int first_num = static_cast<int>(number_str[0]-'0');//char형을 다시 int 형으로 변환하는 방법
        // cout << first_num << endl;
        numMax[num] = first_num;
    }
    
    vector<pair<int, int>> sortedNum(numMax.begin(), numMax.end());
    sort(sortedNum.begin(), sortedNum.end(), [](const pair<int, int>& a, 
    const pair<int, int>& b){return a.second > b.second;});// 첫번쨰 수를 기준으로 내림차순 정리
    
    //정렬한 순서대로 answer에 더한다.(string형은 push_back 불가)
    if(sortedNum[0].first != 0){
        for(const pair <int,int> num : sortedNum){
            answer += to_string(num.first);
        }
    }
    else return 0;
    
    return answer;
}

/*
0 또는 양의 정수가 주어졌을 때, 정수를 이어 붙여 만들 수 있는 가장 큰 수를 알아내 주세요.

예를 들어, 주어진 정수가 [6, 10, 2]라면 [6102, 6210, 1062, 1026, 2610, 2106]를 만들 수 있고, 이중 가장 큰 수는 6210입니다.

0 또는 양의 정수가 담긴 배열 numbers가 매개변수로 주어질 때, 순서를 재배치하여 만들 수 있는 가장 큰 수를 문자열로 바꾸어 return 하도록 solution 함수를 작성해주세요.

제한 사항
numbers의 길이는 1 이상 100,000 이하입니다.
numbers의 원소는 0 이상 1,000 이하입니다.
정답이 너무 클 수 있으니 문자열로 바꾸어 return 합니다.
*/