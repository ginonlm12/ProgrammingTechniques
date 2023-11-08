/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 1.9. (BTVN) Viết chương trình in ra tất cả các dãy con của một dãy cho trước. */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; // Lưu trữ kích thước của mảng
    cin >> n; // Nhập kích thước mảng

    int* A = new int[n]; // Cấp phát bộ nhớ động mảng A có kích thước n

    for(int i = 0; i< n; i++){
        cin >> A[i]; // Nhập giá trị cho từng phần tử của mảng
    }

    // Duyệt qua tất cả các dãy con của mảng A
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
                cout << A[k] << " ";
            }
            cout << endl;
        }
    }
    delete [] A; // Giải phóng bộ nhớ đã cấp phát cho mảng A
    return 0;
}
// Nguyễn Hoàng Lâm - 0517 - 732833


