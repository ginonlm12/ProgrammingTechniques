/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 2.2. Truyền tham chiếu
    Viết hàm hoán vị vòng tròn 3 biến a, b, c. Sau khi thực hiện hàm, các biến a, b, c tương ứng nhận 
    các giá trị mới b, c, a. */
#include <stdio.h>
void rotate(int &x, int &y, int &z){
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    int tmp = x;
    x = y;
    y = z;
    z = tmp;
    /***************************************************/
}
int main(){
    int x, y, z;

    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    scanf("%d%d%d", &x, &y, &z);
    /***************************************************/
 
    printf("Before: %d, %d, %d\n", x, y, z);
    rotate(x, y, z);
    printf("After: %d, %d, %d\n", x, y, z);
 
    return 0;
}