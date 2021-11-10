#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program demonstrates the resizing of matrices

int main(){
    MatrixXd m(2,5);
    m.resize(4,3);
    cout << "The matrix m is of size " << m.rows() << "x" << m.cols() << endl;
    cout << "It has " << m.size() << " coefficients" << endl;
    VectorXd v(2);
    v.resize(5);
    cout << "The vector v is of size " << v.size() << endl;
    cout << "As a matrix, v is of size " << v.rows() << "x" << v.cols() << endl;
}