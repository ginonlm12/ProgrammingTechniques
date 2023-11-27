/* Nguyễn Hoàng Lâm - 0517 - 732833
    Bài 2.8. Sắp xếp
    Viết hàm so sánh cho thuật toán sắp xếp. */
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main() {
    int val1, val2;
    cin >> val1 >> val2;
    vector< vector<int> > a = {{1, 3, 7}, {2, 3, 4, val1}, {9, 8, 15}, {10, val2},};
    // Sắp xếp các vector trong a theo tổng các phần tử giảm dần
    /*YOUR CODE HERE - Nguyễn Hoàng Lâm - 0517 - 732833*/
    sort(a.begin(), a.end(), [](const vector<int> &x, const vector<int> &y){
        return accumulate(x.begin(), x.end(), 0) > accumulate(y.begin(), y.end(), 0);
    });
    /***************************************************/
    for (const auto &v : a) {
        for (int it : v) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}