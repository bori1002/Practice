#include <iostream>

using namespace std;

int main(){
    //시험점수를 입력받는다 0<=시험점수<=100, int
    unsigned int score = 0;
    cin >> score;

    //90~100: A, 80~89: B, 70~79: C, 60~69: D, 나머지: F
    char grade = 'F';

    if(score >= 90 && score <= 100){grade = 'A';}
    else if(score >= 80 && score < 90){grade = 'B';}
    else if(score >= 70 && score < 80){grade = 'C';}
    else if(score >= 60 && score < 70){grade = 'D';}
    else if(score < 60){grade = 'F';}
    else{return -1;}

    cout << grade;

    return 0;
}