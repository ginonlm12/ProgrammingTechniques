/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 1.9. (BTVN) Viết chương trình nhập vào 2 ma trận vuông cùng kích thước n*n, trong đó 
    n nhập từ bàn phím. Sau đó tính tổng và tích của hai ma trận đó và đưa kết quả ra màn hình.*/
#include <stdio.h>
// Hàm cấp phát bộ nhớ động cho ma trận kích thước nxn và gán con trỏ đến ma trận này vào biến A.
void ALLOCATE_MEMORY(int ***A, int n){
    *A = new int*[n]; // Cấp phát mảng con trỏ chứa n hàng
    for(int i = 0; i<n; i++){
        (*A)[i] = new int[n]; // Cấp phát mảng số nguyên có n cột cho từng hàng của ma trận
    }
}
// Hàm nhập giá trị cho các phần tử của ma trận có kích thước nxn.
void INPUT(int **A, int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &A[i][j]); // Nhập giá trị cho từng phần tử của ma trận
        }
    }
}
// Hàm thực hiện phép cộng hai ma trận A và B có kích thước nxn, in ra kết quả.
void SUM(int **A, int **B, int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            printf("%d ", A[i][j] + B[i][j]);  // In giá trị của từng phần tử trong ma trận tổng
        }
        printf("\n"); // Xuống dòng sau mỗi hàng của ma trận
    }
}
// Hàm thực hiện phép nhân hai ma trận A và B có kích thước nxn, in ra kết quả.
void PRODUCT(int **A, int **B, int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            int Pro = 0;
            for(int k = 0; k<n; k++){
                Pro += A[i][k]*B[k][j];  // Quy tắc nhân hai ma trận
            }
            printf("%d ", Pro); // In giá trị của từng phần tử trong ma trận tích
        }
        printf("\n"); // Xuống dòng sau mỗi hàng của ma trận
    }
}
// Hàm giải phóng bộ nhớ đã cấp phát cho ma trận.
void FREE_MEMORY(int **A, int n){
    for(int i = 0; i<n; i++){
        delete[] A[i];  // Giải phóng bộ nhớ cho từng hàng của ma trận
    }
    delete[] A; // Giải phóng bộ nhớ cho mảng con trỏ
}
int main(){
    printf("Bai 1.10_LamNH_0517\n");
    int n, **A, **B;
    scanf("%d",&n);
    ALLOCATE_MEMORY(&A, n); // Cấp phát bộ nhớ cho ma trận A
    INPUT(A, n); // Nhập giá trị cho ma trận A
    ALLOCATE_MEMORY(&B, n); // Cấp phát bộ nhớ cho ma trận B
    INPUT(B, n); // Nhập giá trị cho ma trận B

    SUM(A, B, n); // Thực hiện phép cộng và in ra kết quả
    PRODUCT(A, B, n); // Thực hiện phép nhân và in ra kết quả

    FREE_MEMORY(B, n); // Giải phóng bộ nhớ của ma trận B
    FREE_MEMORY(A, n); // Giải phóng bộ nhớ của ma trận A
    return 0;
}
// Nguyễn Hoàng Lâm - 0517 - 732833

