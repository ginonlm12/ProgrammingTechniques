/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 1.3. Viết chương trình yêu cầu nhập giá trị cho 3 biến số nguyên x, y, z kiểu int. 
    Sau đó sử dụng duy nhất một con trỏ để cộng giá trị của mỗi biến thêm 100.*/
#include <stdio.h>
int main(){
    int x, y, z;
    int *ptr;
    scanf("%d %d %d", &x, &y, &z); // Nhập giá trị cho x, y và z từ bàn phím.
    printf("Here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x, y, z);

    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    ptr = &x;
    *ptr += 100; // Tăng giá trị của x lên 100
    ptr = &y;
    *ptr += 100; // Tăng giá trị của y lên 100
    ptr = &z;
    *ptr += 100; // Tăng giá trị của z lên 100
    /***************************************************/
    
    printf("Once again, here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x, y, z); // // In ra giá trị mới của x, y, và z
    return 0;
} 
// Nguyễn Hoàng Lâm - 0517 - 732833

