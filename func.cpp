#include "func.h"
void rightShift(const int size, int *arr) {
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; i--) arr[i] = arr[i - 1];
    arr[0] = temp;
}

void leftShift(const int size, int *arr) {
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++) arr[i] = arr[i + 1];
    arr[size - 1] = temp;
}

void shiftArray(const int size, int *arr, int n) {

    if (n < 0) {
        for (int i = 0; i > n; --i) leftShift(size, arr);
    } else {
        for (int i = 0; i < n; ++i) rightShift(size, arr);
    }

//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << " ";
//    }
}
QString createString(int size,int *arr){
    QString res;
    for(int i = 0; i < size; ++i){
        res.append(QString::number(arr[i]).append(" "));
    }
    return res;
}
