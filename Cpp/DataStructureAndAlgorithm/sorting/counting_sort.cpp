//counting_sort를 이용한 오름차순 정리
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> before = {5,0,2,4,2,2,4,1};
    int howmany = before.size();
    vector<int> after(howmany);//before배열의 크기만큼 초기화
    //카운팅배열의 크기만큼 0 원소 추가
    //카운팅배열의 크기는 before배열의 최댓값과 같다.
    vector<int> CountingArr(10,0);//before배열의 최댓값이 10을 넘지 않으므로
    int count = 0;

    //before배열의 값을 카운팅배열의 인덱스 값으로 하여, before 배열의 값의 수를 저장
    for(int before_num : before){
        CountingArr[before_num] += 1;
    }
    //카운팅배열의 값을 2블럭씩 합하여 다시 저장(누적된 방의 갯수를 저장)(0번째 인덱스는 그대로)
    for(int i = 1; i < CountingArr.size(); i++){
        CountingArr[i] += CountingArr[i-1];
    }

    for(int i = CountingArr.size()-1; i >= 0; i--){
        CountingArr[before[i]] = CountingArr[before[i]]-1;
        after[CountingArr[before[i]]] = before[i];
    }

    for(int data : after){
        cout << data << ", ";
    }

    cout << endl << "count: " << count;
}