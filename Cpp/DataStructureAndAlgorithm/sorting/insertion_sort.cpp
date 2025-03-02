//Insertion sort 를 이용한 오름차순 정렬
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> Data = {5,1,7,10,2};
    int howmany = Data.size();//5
    int count = 0;
    for(int pivot = 1; pivot < howmany; pivot++){
        count++;
        int key = Data[pivot];
        int now = pivot - 1;
        while(now>=0 && Data[now]>key){//현재 숫자가 키 값보다 크면 계속 뒤로감
            Data[now+1] = Data[now];
            now--;
        }
        Data[now+1] = key;
    }
    for(int data : Data){
        cout << data << ", ";
    }
    cout << endl << "count: " << count;
}