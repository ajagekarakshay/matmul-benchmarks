#include <arrayfire.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char **argv){
    int size = stoi(argv[1]);
    af::array M = af::randu(size, size, f32);
    af::array N =  af::randu(size, size, f32);
    af::timer start = af::timer::start();
    auto product = af::matmul(M, N);
    auto ans = af::sum(product);
    //af::print("test", ans, 3);
    printf("elapsed seconds: %g\n", af::timer::stop(start));
    return 0;
}