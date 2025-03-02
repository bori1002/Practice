//Bubble sort 를 이용한 오름차순 정ㅕ
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> Data = {5,1,7,10,2};
    int howmany = Data.size();//5
    int count = 0;
    for(int i = howmany-1 ; i > 0; i--){
        count += 1;
        for(int j = 0; j < i; j++){
            if(Data[j] > Data[j+1]){
                int temp = Data[j+1];
                Data[j+1] = Data[j];
                Data[j] = temp;
            }
        }
    }
    for(int data : Data){
        cout << data << ", ";
    }
}