#include<bits/stdc++.h>
using namespace std;
//khai bao mot so hang so
const int LIMIT = 100; // gioi han -100<x<100
// neu x=<-100 thi f(x) ~ 0, neu x>=100 thi f(x) ~ 1
const int NUM_ITER = 100000; 
const int NUM_INPUTS = NUM_ITER * 100; //so test case

//ham sigmoid tinh thong thuong (cham)
double sigmoid_slow(double x) {
    return 1.0 / (1.0 + exp(-x));
}

// mang luu cac test cases 
double x[NUM_INPUTS];
// chuan bi dau vao 
// chon ra ngau nhien cac test case
void prepare_input() {
    const int PRECISION = 1000000;
    const double RANGE = LIMIT / 20.0;
    for (int i = 0; i < NUM_INPUTS; ++i) {
        x[i] = RANGE * (rand() % PRECISION - rand() % PRECISION) / PRECISION;
    }
}

const int N = 10000000;
double y[N];

//chuan bi du lieu
//tinh truoc y[i] cho mot so gia tri
void precalc() {
    double delta = (LIMIT * 2.0) / N; // delta l� khoang vi phan
    //X[i] = -LIMIT + delta * i
    // tinh truoc y[i] cho X[i]
    for(int i=0; i<=N; ++i)  y[i] = sigmoid_slow(-LIMIT + delta * i); 
}

//ham tinh sigmoid nhanh
//su dung inline de giam bot thu tuc va thoi gian khi goi ham
inline double sigmoid_fast(double x) {
    if(x <= -LIMIT) return 0; // neu x=<-100 thi f(x) ~ 0 
    if(x >= +LIMIT) return 1; // neu x>=100 thi f(x) ~ 1
    static double delta = (LIMIT * 2.0)/N; //delta la cac khoang sai phan 
    int i = (x + LIMIT) / delta;
    return (x - (-LIMIT + (delta * i))) / delta * (y[i+1] - y[i]) + y[i];
}
//# END fast code

// ham do thoi gian chay cua ham tinh sigmoid
// duoc tro boi con tro calc
// bo kiem thu x[0]->x[19]
// ket qua luu o mang dong result
double benchmark(double (*calc)(double), vector<double> &result) {
    const int NUM_TEST = 20; // so test case

    double taken = 0;
    result = vector<double>();
    result.reserve(NUM_ITER);

    int input_id = 0;
    clock_t start = clock();
    for (int t = 0; t < NUM_TEST; ++t) {
        double sum = 0;
        for (int i = 0; i < NUM_ITER; ++i) {
            double v = fabs(calc(x[input_id]));
            sum += v;
            if (t == 0) result.push_back(v);
            if ((++input_id) == NUM_INPUTS) input_id = 0;
        }
    }
    clock_t finish = clock();
    taken = (double)(finish - start);
//#  printf("Time: %.9f\n", taken / CLOCKS_PER_SEC);
    return taken;
}

// ham kiem tra xem hai cach tinh co dua ra cung mot ket qua hay khong
bool is_correct(const vector<double> &a, const vector<double> &b) {
    const double EPS = 1e-6;

    if (a.size() != b.size()) return false;
    for (unsigned int i = 0; i < a.size(); ++i) {
        if (fabs(a[i] - b[i]) > EPS) {
            return false;
        }
    }
    return true;
}

// ham main
int main() {
    prepare_input();
    precalc();

    vector<double> a, b;
    double slow = benchmark(sigmoid_slow, a);
    double fast = benchmark(sigmoid_fast, b);

    double xval;
    scanf("%lf", &xval);
    printf("%.2f \n", sigmoid_fast(xval));

    if (is_correct(a, b) && (slow/fast > 1.3)) { // cach tinh nhanh dung va nhanh hon tinh cham
        printf("Correct answer! Your code is faster at least 30%%!\n");
    } else {
        printf("Wrong answer or your code is not fast enough!\n");
    }
    return 0;
}
