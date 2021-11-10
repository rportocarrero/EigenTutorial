#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program demonstrates how assigning matrices to eachother resizes them.

int main(){
    MatrixXf a(2,2);
    cout <<  "a is of size " << a.rows() << "x" << a.cols() << endl;
    MatrixXf b(3,3);
    a = b;
    cout << "a is now of size " << a.rows() << "x" << a.cols() << endl;
}