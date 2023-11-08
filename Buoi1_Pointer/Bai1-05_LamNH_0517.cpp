/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 1.5. Viết hàm trả về con trỏ trỏ tới giá trị lớn nhất 
    của một mảng các số double. Nếu mảng rỗng hãy trả về NULL. */
#include<bits/stdc++.h>
double* maximum(double* a, int size){
    double *max; // Khởi tạo con trỏ 'max' lưu trữ phần tử lớn nhất
    max = a; // Gán con trỏ 'max' ban đầu bằng con trỏ 'a'
    if (a == NULL) return NULL; // Kiểm tra con trỏ 'a' trỏ đến mảng hợp lệ không

    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    for(int i = 0; i<size; i++){
        if(*(a+i) > *max) max = a+i; // Cập nhật con trỏ 'max' nếu tìm thấy phần tử lớn hơn
    }
    /***************************************************/
    
    return max; // Trả về con trỏ đến phần tử lớn nhất trong mảng
}
// Nguyễn Hoàng Lâm - 0517 - 732833

int main(){
    double arr[] = {1., 10., 2., -7., 25., 3.};
    double* max = maximum(arr, 6);
    printf("%.0f", *max);
}