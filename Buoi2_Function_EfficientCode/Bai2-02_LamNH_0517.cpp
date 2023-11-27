/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 2.2. Truyền tham chiếu
    Viết hàm hoán vị vòng tròn 3 biến a, b, c. Sau khi thực hiện hàm, các biến a, b, c tương ứng nhận 
    các giá trị mới b, c, a. */
#include <stdio.h>
void rotate(int &x, int &y, int &z){ // Hàm hoán vị giá trị của ba biến x, y, z
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    int tmp = x; // Khai báo biến cục bộ tmp
    x = y;
    y = z;
    z = tmp;
    /***************************************************/
}
int main(){
    int x, y, z; // Khai báo biến x, y, z

    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    scanf("%d%d%d", &x, &y, &z); // Nhập giá trị x, y, z từ bàn phím
    /***************************************************/
 
    printf("Before: %d, %d, %d\n", x, y, z); // In giá trị trước khi hoán vị
    rotate(x, y, z); // Gọi hàm rotate để hoán vị giá trị của ba biến
    printf("After: %d, %d, %d\n", x, y, z); // In giá trị sau khi hoán vị ra màn hình
 
    return 0;
}