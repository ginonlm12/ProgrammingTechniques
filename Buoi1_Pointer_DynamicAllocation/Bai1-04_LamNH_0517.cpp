/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 1.4. Viết hàm countEven(int*, int) nhận một mảng số nguyên và kích thước 
    của mảng, trả về số lượng số chẵn trong mảng.*/
#include<bits/stdc++.h>
using namespace std;
int counteven(int* arr, int size){
    int count = 0; // Khởi tạo biến count đếm số lượng phần tử chẵn
    
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    for(int i = 0; i<size; i++){
        if(*(arr+i)%2 == 0) count ++; // Tăng biến count lên nếu phần tử là số chẵn
    }
    /***************************************************/
    
    return count; // Trả về số lượng phần tử chẵn trong mảng
}
// Nguyễn Hoàng Lâm - 0517 - 732833

int main(){
    int arr[] = {1, 5, 4, 0, 10, 7};
    cout << counteven(arr, 6);
}