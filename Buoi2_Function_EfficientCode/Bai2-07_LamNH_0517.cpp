/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 2.7. Khái quát hóa hàm
    Viết hàm tính tổng các phần tử trong hai mảng.
    Yêu cầu sử dụng function template để cho phép hàm làm việc với các mảng số nguyên lẫn số thực. */
#include <iostream>
using namespace std;
// Viết hàm arr_sum
/*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
template<class T> T arr_sum(T a[], int m, T b[], int n){
    T c = 0;
    for(int i = 0; i<m; i++){
        c += a[i];
    }
    for(int i = 0; i<n; i++){
        c += b[i];
    }
    return c;
}
/***************************************************/
int main() {
    int val;
    cin >> val;
    {
        int a[] = {3, 2, 0, val};
        int b[] = {5, 6, 1, 2, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }
    {
        double a[] = {3.0, 2, 0, val * 1.0};
        double b[] = {5, 6.1, 1, 2.3, 7};
        cout << arr_sum(a, 4, b, 5) << endl;
    }
    return 0;
}
