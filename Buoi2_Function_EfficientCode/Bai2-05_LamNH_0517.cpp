/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 2.5. Đa năng hóa toán tử
    Viết các toán tử tính tổng, hiệu, tích và thương của hai số phức.*/
#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip> 
using namespace std;
// Khai báo struct Complex gồm hai phần thực và ảo
struct Complex{
    double real;
    double imag;
};
// Định nghĩa toán tử cộng cho số phức - Đa năng hóa toán tử +
Complex operator + (Complex a, Complex b){
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    return Complex{a.real + b.real, a.imag + b.imag};
    /***************************************************/
}
// Định nghĩa toán tử trừ cho số phức - Đa năng hóa toán tử -
Complex operator - (Complex a, Complex b){
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    return Complex{a.real - b.real, a.imag - b.imag};
    /***************************************************/
}
// Định nghĩa toán tử nhân cho số phức - Đa năng hóa toán tử *
Complex operator * (Complex a, Complex b){ // (a.real + i a.imag)(b.real - i b.imag)/ sqrt()
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    Complex c;
    c.real = a.real*b.real - a.imag*b.imag;
    c.imag = a.imag*b.real + b.imag*a.real
    return c;
    /***************************************************/
}
// Định nghĩa toán tử chia cho số phức - Đa năng hóa toán tử /
Complex operator / (Complex a, Complex b){
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    Complex c;
    c.real = (a.real*b.real + a.imag*b.imag)/(b.real*b.real + b.imag*b.imag);
    c.imag = (a.imag*b.real - b.imag*a.real)/(b.real*b.real + b.imag*b.imag);
    return c;
    /***************************************************/
}
// Đa năng hóa cout để in số phức a dưới dạng a1 + a2i
ostream& operator << (ostream& out, const Complex &a){
    out << '(' << std::setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') 
    << std::setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}
int main() {
    double real_a, real_b, imag_a, imag_b;
    cin >> real_a >> imag_a; // Nhập phần thực và ảo cho số phức thứ nhất.
    cin >> real_b >> imag_b; // Nhập phần thực và ảo cho số phức thứ hai.
    
    // Tạo hai số phức.
    Complex a{real_a, imag_a}; 
    Complex b{real_b, imag_b};
    
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    
    return 0;
}

