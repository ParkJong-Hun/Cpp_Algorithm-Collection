//2차원 배열 기본형
#include <iostream>

using namespace std;
//배열
int arr[5][5];
//각 인덱스에 들어갈 값
int cnt = 1;
//함수
void TwoDArray() {
    //행
    for(int i = 0; i < 5; i++) {
        //열
        for(int j = 0; j < 5; j++) {
            //값을 넣음
            arr[i][j] = cnt;
            //값을 1 증가
            cnt++;
        }
    }
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
    return;
}

int main(void) {
    TwoDArray();
    return 0;
}