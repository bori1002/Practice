#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> Data = {15, 10, 21, 49, 2, 52, 44, 1};
    int key = 5;//찾고자 하는 자료
    int index = 0;//자료의 인덱스

    for(int i = 0; i < Data.size(); i++){//순차적으로 탐색
        if(Data[index] == key){
            index = i;
            break;
        }
    }
    if(index == 0){
        cout << "당신이 찾는 " << key << "가 없습니다" << endl;
    }
    else if(index != 0){
        cout << "당신이 찾는 " << key << "의 인덱스 번호는 " << index
                << "입니다." << endl;
    }


    return 0;
}
