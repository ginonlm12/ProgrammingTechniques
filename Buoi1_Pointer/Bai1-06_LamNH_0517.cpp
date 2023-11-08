/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 1.6. Viết hàm đảo ngược một mảng các số nguyên theo hai cách: dùng chỉ số và dùng con trỏ. */
#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[], int size){
    int l = 0, r = size - 1, tmp;
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    while(r > l){
    // Hai chỉ số 'l' và 'r' duyệt mảng từ hai đầu và đổi chỗ các phần tử.
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        l++;
        r--;
    }
    /***************************************************/
}
void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    /*YOUR CODE HERE - Nguyễn Hoàng Lam - 0517 - 732833*/
    while(r > l){
    // Hai con trỏ 'arr + l' và 'arr + r' duyệt mảng từ hai đầu và đổi chỗ các phần tử.
        tmp = *(arr + l);
        *(arr + l) = *(arr + r);
        *(arr + r) = tmp;
        l++;
        r--;
    }
    /***************************************************/
}
// Nguyễn Hoàng Lâm - 0517 - 732833

int main(){
    int arr[] = {9, 3, 5, 6, 2, 5};
    reversearray(arr, 6);
    for(int i = 0; i < 6; i++) cout << arr[i] << " ";
    int arr2[] = {4, -1, 5, 9};
    ptr_reversearray(arr2, 4);
    for(int i = 0; i < 4; i++) cout << arr2[i] << " ";
}