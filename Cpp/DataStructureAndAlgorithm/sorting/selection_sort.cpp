//selection sort 를 이용한 오름차순 정리
//최소값을 찾아서 앞쪽부터 순차적으로 정리해 나가는 방법
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> Data = {3,2,5,4,1};
    int count = 0;

    for(int index = 0; index < Data.size(); index++){
        int min = Data[index];
        for(int j = index+1; j < Data.size(); j++){
            if(Data[j] < Data[index]){
                int temp = Data[index];
                Data[index] = Data[j];
                Data[j] = temp;
            }
        }
        count++;
    }

        for(int data : Data){
        cout << data << ", ";
    }

    cout << endl << "count: " << count;
}