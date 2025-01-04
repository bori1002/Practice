//이분탐색, 이진탐색
//자료를 두가지로 나눠서 탐색하는 방법 탐색 횟수가 순차 탐색의 절반이므로 더 빠른 탐색이 가능
//단 자료가 정렬이 되어있어야만 함
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> Data = {1, 3, 4, 6, 8, 10, 22, 34, 35, 56, 77, 99, 100};
    int key = 22;//찾고자 하는 자료
    int index = 0;
    int start = 0;
    int end = Data.size()-1;
    int middle = (start+end)/2;
    bool success = false;

    while(start <= end && success == false){//시작점이 끝점보다 작고 원하는 데이터를 찾지 못했을 동안 검색 실행
        if(Data[middle] == key){
            success = true;
            index = middle;
        }
        else if(Data[middle] > key){
            end = middle;
        }
        else if(Data[middle] < key){
            start = middle;
        }
        middle = (start+end)/2;
    }

    if(success == false){
        cout << "당신이 찾는 " << key << "가 없습니다" << endl;
    }
    else if(success == true){
        cout << "당신이 찾는 " << key << "의 인덱스 번호는 " << index
                << "입니다." << endl;
    }

    return 0;
}
