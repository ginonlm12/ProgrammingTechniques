/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 1.1. Viết một chương trình C nhập vào 3 số nguyên. Thiết lập một con trỏ để lần lượt
    trỏ tới từng số nguyên và hiển thị kết quả giá trị tham chiếu ngược của con trỏ.*/
#include <stdio.h>
int main(){
    int x, y, z;
    int* ptr;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z); // Nhập 3 số nguyên x, y, z
    printf("\nThree integers are: \n");
    ptr = &x; // Gán địa chỉ của biến x cho con trỏ ptr
    printf("x = %d\n", *ptr);

    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    ptr = &y; // Gán địa chỉ của biến y cho con trỏ ptr
    printf("y = %d\n", *ptr);
    ptr = &z; // Gán địa chỉ của biến z cho con trỏ ptr
    printf("z = %d\n", *ptr);
    /***************************************************/
    
    return 0;
}
// Nguyễn Hoàng Lâm - 0517 - 732833

