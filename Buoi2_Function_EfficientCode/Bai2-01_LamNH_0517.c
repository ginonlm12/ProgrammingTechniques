/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 2.1. Truyền tham trị
    Viết hàm tính độ dài cạnh huyền của tam giác theo độ hai cạnh góc vuông.*/
#include <stdio.h>
#include <math.h>
float get_hypotenuse(float x, float y){ // Hàm tính độ dài của cạnh huyền trong tam giác vuông
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    return sqrt(x*x + y*y); // Định lý Pytago: z^2= x^2+y^2
    /***************************************************/
}

int main(){
    float x, y; // Khai báo biến x và y
    scanf("%f%f", &x, &y); // Nhập giá trị từ bàn phím
    
    float z = get_hypotenuse(x, y);  // Tính độ dài cạnh huyền và lưu vào biến z
    printf("z = %.2f\n", z);  // In kết quả ra màn hình
    
    return 0;
}
