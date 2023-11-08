/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 1.8. Viết chương trình nhập vào một ma trận 2 chiều kích thước m*n với m và n nhập từ bàn phím. 
    Đưa ra tổng các phần tử chẵn của ma trận đó. */
#include <stdio.h>
void allocate_mem(int ***mt, int m, int n){
    // Allocate memory for the matrix
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    *mt = new int*[m]; // Cấp phát mảng con trỏ chứa m hàng
    for(int i = 0; i<m; i++){
        (*mt)[i] = new int[n]; // Cấp phát mảng số nguyên có n cột cho từng hàng của ma trận
    }
    /***************************************************/
}
void input(int **mt, int m, int n){
    // Input elements of the matrix
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    printf("Enter all elements of the matrix: \n");
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &mt[i][j]); // Nhập giá trị cho từng phần tử của ma trận
        }
    }
    /***************************************************/
}
void output(int **mt, int m, int n){
    // Print all elements of the matrix
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    printf("Print all elements of the matrix: \n");
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", mt[i][j]); // In giá trị của từng phần tử trong ma trận
        }
        printf("\n"); // In xuống dòng sau mỗi hàng của ma trận
    }
    /***************************************************/
}
int process(int **mt, int m, int n){
    int tong = 0; // Khởi tạo biến tong để tính tổng các phần tử chẵn trong ma trận
    // Calculate the sum of all even elements in the matrix
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(mt[i][j]%2 == 0) tong+= mt[i][j]; // Cộng giá trị của phần tử chẵn vào biến tong
        }
    }
    /***************************************************/
    return tong; // Trả về tổng các phần tử chẵn trong ma trận
}
void free_mem(int **mt, int m, int n){
    // Free memory
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    for(int i = 0; i<m; i++){
        delete[] mt[i]; // Giải phóng bộ nhớ cho từng hàng của ma trận
    }
    delete[] mt; // Giải phóng bộ nhớ cho mảng con trỏ
    /***************************************************/
}
int main(){
    int m, n, **mt;
    printf("Enter m, n = ");
    scanf("%d%d", &m, &n);
    allocate_mem(&mt, m, n); // Cấp phát bộ nhớ cho ma trận
    input(mt, m, n); // Nhập giá trị cho ma trận
    output(mt, m, n); // In ra giá trị của ma trận
    printf("The sum of all even elements is %d", process(mt, m, n));
    free_mem(mt, m, n); // Giải phóng bộ nhớ của ma trận
    return 0;
}
// Nguyễn Hoàng Lâm - 0517 - 732833

