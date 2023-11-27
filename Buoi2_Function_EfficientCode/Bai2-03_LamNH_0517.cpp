/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 2.3. Tham số ngầm định
    Viết chương trình yêu cầu nhập giá trị cho số nguyên x nhỏ hơn 100. In ra giá trị ax2+bx+c với 
    a, b, c định sẵn.*/
#include <stdio.h>
/*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
int get_value(int x, int a = 2, int b = 1, int c = 0){
    // Hàm get_value với tham số mặc định a = 2, b = 1, c = 0
    return a*x*x + b*x + c;
}
/***************************************************/
int main(){
    int x; // Khai báo biến x
    scanf("%d", &x); // Nhập giá trị cho x từ bàn phím
    
    int a = 2; // Giá trị mặc định của a
    int b = 1; // Giá trị mặc định của b
    int c = 0; // Giá trị mặc định của c
    
    // Nhập 3 số nguyên a, b, c từ bàn phím
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    scanf("%d%d%d", &a, &b, &c); // Nhập 3 số nguyên a, b, c từ bàn phím
    /***************************************************/
    
    printf("a=2, b=1, c=0: %d\n", get_value(x)); // In giá trị với các tham số mặc định a=2, b=1, c=0
    // In giá trị với a là giá trị từ bàn phím, b và c là giá trị mặc định
    printf("a=%d, b=1, c=0: %d\n", a, get_value(x, a));
    // In giá trị với a và b là giá trị từ bàn phím, c là giá trị mặc định
    printf("a=%d, b=%d, c=0: %d\n", a, b, get_value(x, a, b));
    // In giá trị với a, b, c lần lượt là giá trị từ bàn phím
    printf("a=%d, b=%d, c=%d: %d\n", a, b, c, get_value(x, a, b, c));
    
    return 0;
}
