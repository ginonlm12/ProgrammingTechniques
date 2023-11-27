/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 2.4. Đa năng hóa hàm
    Viết các hàm tính lập phương của số nguyên và số thực.*/
#include <stdio.h>
// Viết hàm tính lập phương của một biến kiểu int
int cube(int x) {
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    return x*x*x;
    /***************************************************/
}
// Viết hàm tính lập phương của một biến kiểu double
/*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
double cube(double x){
    return x*x*x;
}
/***************************************************/
int main() {
    int n; // Khai báo biến n kiểu int 
    double f; // Khai báo biến f kiểu double
    scanf("%d %lf", &n, &f);  // Nhập giá trị cho biến kiểu int và double từ bàn phím
    
    printf("Int: %d\n", cube(n)); // In kết quả lập phương của biến kiểu int
    // In kết quả lập phương của biến kiểu double, làm tròn hai chữ số sau dấu phẩy
    printf("Double: %.2lf\n", cube(f));
    
    return 0;
}
