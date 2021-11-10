#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program demonstrates array multiplication with the Eigen library

int main(){
    ArrayXXf a(2,2), b(2,2);
    a << 1,2,
        3,4;
    b << 5,6,
        7,8;
    
    cout << "a * b = \n" << a * b << endl;
}