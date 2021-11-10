#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial demonstrates adding and subtracting vectors in the Eigen library

int main(){
    ArrayXXf A(3,3), B(3,3);
    A << 1,2,3,
        4,5,6,
        7,8,9;
    B << 1,2,3,
        1,2,3,
        1,2,3;

    // adding two arrays
    cout << "a + b = " << endl << A + B << endl << endl;

    // subtracting two arrays
    cout << "a - 2 = " << endl << A - 2 << endl; 
}