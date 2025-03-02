#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isSafe(int x, int y){
    if(x>=1 && x<=5 && y>=1 && y<=5){
        return true;
    }else{
        return false;
    }
}

int main(){
    vector<vector<int>> delta = {{-1,-1},{0,-1},{1,-1},{0,0},{-1,1},{0,1},{1,1}};
    vector<vector<int>> array(6, vector<int>(6));
    int temp = 0, answer = 0;

    srand(static_cast<unsigned int>(std::time(0)));

    for(int i = 0; i < 6; i++){//배열에 값 할당
        for(int j = 0; j < 6; j++){
            int rand_num = rand()%10;
            array[i][j] = rand_num;
        }
    }
    for(vector<int> y : array){
        for(int x : y){
            cout << x << " ";
        }
        cout << endl;
    }

    //sum
    for(int y = 1; y < 5; y++){
        for(int x = 1; x < 5; x++){
            int sum = 0;
            if(isSafe(x, y)){
                for(vector<int> coordinate : delta){
                    sum += array[y + coordinate[1]][x + coordinate[0]];
                }
                if(temp < sum){
                    temp = sum;
                }
            }
        }
    }
    answer = temp;
    cout << answer << endl;
    
    return 0;
}