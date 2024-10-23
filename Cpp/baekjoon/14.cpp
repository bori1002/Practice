#include <iostream>
#include <string>

using namespace std;

int main(){
    int whole_price = 0, product_num = 0, price_sum = 0;
    string answer = "No";

    cin >> whole_price;
    cin >> product_num;
    for(int i = 0; i < product_num; i++){
        int price = 0, num = 0;
        cin >> price >> num;
        price_sum += price*num;
    }
    if(whole_price == price_sum){
        answer = "Yes";
    }

    cout << answer;
}