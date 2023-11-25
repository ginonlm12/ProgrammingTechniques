/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 2.5. Đa năng hóa toán tử
    Viết các toán tử tính tổng, hiệu, tích và thương của hai số phức.*/
#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip> 
using namespace std;
struct Complex{
    double real;
    double imag;
};
Complex operator + (Complex a, Complex b){
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    return Complex{a.real + b.real, a.imag + b.imag};
    /***************************************************/
}
Complex operator - (Complex a, Complex b){
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    return Complex{a.real - b.real, a.imag - b.imag};
    /***************************************************/
}
Complex operator * (Complex a, Complex b){ // (a.real + i a.imag)(b.real - i b.imag)/ sqrt()
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    return Complex{a.real*b.real - a.imag*b.imag, a.imag*b.real + b.imag*a.real};
    /***************************************************/
}
Complex operator / (Complex a, Complex b){
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    return Complex{(a.real*b.real + a.imag*b.imag)/(b.real*b.real + b.imag*b.imag), 
                            (a.imag*b.real - b.imag*a.real)/(b.real*b.real + b.imag*b.imag)};
    /***************************************************/
}
ostream& operator << (ostream& out, const Complex &a){
    out << '(' << std::setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') 
    << std::setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}
int main() {
    double real_a, real_b, imag_a, imag_b;
    cin >> real_a >> imag_a;
    cin >> real_b >> imag_b;
    
    Complex a{real_a, imag_a};
    Complex b{real_b, imag_b};
    
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    
    return 0;
}

