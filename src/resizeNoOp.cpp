#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program demonstrates the automatic no-op of a resize to the existing size of the matrix.

int main(){
    Matrix4d m;
    m.resize(4,4); //no operation
    cout << "The matrix m is of size " << m.rows() << "x" <<m.cols() << endl;
}