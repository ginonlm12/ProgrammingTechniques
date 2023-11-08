/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 1.7. Viết chương trình nhập vào một mảng các số nguyên với số lượng các phần tử nhập từ bàn phím.
    Sau đó sắp xếp mảng theo thứ tự tăng dần. Hiển thị danh sách mảng trước và sau khi sắp xếp. */
#include <stdio.h>
int *a;
int n, tmp;
int main(){
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // ALLOCATE MEMORY /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    a = new int[n]; // Cấp phát bộ nhớ động cho mảng 'a' kích thước n
    if(a == NULL) return 0; // Thoát chương trình nếu cấp phát không thành công (Không đủ bộ nhớ)
    /***************************************************/
    for(int i = 0; i < n; i++)
    scanf("%d", a + i); // Nhập giá trị cho từng phần tử của mảng

    printf("The input array is: \n");
    for(int i = 0; i < n; i++)
    printf("%d ", *(a + i)); // In ra mảng ban đầu
    printf("\n");
    
    // SORT ARRAY /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    for(int i = 0; i<n; i++){ // Sắp xếp mảng 'a' bằng thuật toán sắp xếp nổi bọt.
        for(int j = i; j<n; j++){
            if(*(a+i) > *(a+j)){
                tmp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = tmp;
            }
        }
    }
    /***************************************************/
    
    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++)
    printf("%d ", *(a + i)); // In ra mảng sau khi sắp xếp
    printf("\n");
    
    delete [] a; // Giải phóng bộ nhớ đã cấp phát cho mảng 'a'
    return 0;
}
// Nguyễn Hoàng Lâm - 0517 - 732833

