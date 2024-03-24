#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries){
    vector<int> answer;
    for(const vector<int>& query : queries){
        int s = query[0];
        int e = query[1];
        int k = query[2];
        vector<int> temp;
        

        for(int i = s; i <= e; i++){
            if(k < arr[i]){
                temp.push_back(arr[i]);
            }
        }

        if(temp.empty()){
            answer.push_back(-1);
        }
        else if(!temp.empty()){
            int min_num = temp[0];
            for(int j = 1; j < temp.size(); j++){
                if(min_num > temp[j]){
                    min_num = temp[j];
                }
            }
            answer.push_back(min_num);
        }

        
    }
    return answer;
}

int main(){
    vector<int> answer = solution({0, 2, 3, 5, 4, 7, 4}, {{0, 4, 2}, {0, 3, 2},
                                {0, 2, 2}});
    for(const int& I : answer){
        cout << I << ",";
    }
    return 0;
}