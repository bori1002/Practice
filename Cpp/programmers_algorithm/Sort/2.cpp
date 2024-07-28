//배열 array의 i번째 숫자부터 j번째 숫자까지 자르고 정렬했을 때, k번째에 있는 수를 구하려 합니다.
#include <iostream>
#include <vector>

using namespace std;

vector<int> sortingArr(vector<int> array){//삽입정렬로 해보도록 하겠습니다
    vector<int> result = array;
    for(int i = 1; i < result.size(); i++){
        for(int j = i; j > 0; j--){
            if(result[j-1] > result[j]){
                int temp = result[j];
                result[j] = result[j-1];
                result[j-1] = temp;
            }
            else if(result[j-1] <= result[j]){
                break;
            }
        }
    }
    return result;
}

vector<int> croppingArr(vector<int> array, int i, int j){
    vector<int> result;
    for(int a = i-1; a < j; a++){
        result.push_back(array[a]);
    }
    return result;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(vector<int> command:commands){
        vector<int> temp = croppingArr(array, command[0], command[1]);
        temp = sortingArr(temp);
        for(const int num:temp){cout<<num<<",";}
        answer.push_back(temp[command[2]-1]);
    }
    return answer;
}

int main(){
    vector<int> answer = solution({1, 5, 2, 6, 3, 7, 4}, {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}});
    for(int num:answer){
        cout << num << ",";
    }
}