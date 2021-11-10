#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program demonstrates scalar multiplication and division of matrices

int main(){
    Matrix2d a;
    a << 1,2,
        3,4;
    Vector3d v(1,2,3);
    cout << "a * 2.5 = \n" << a * 2.5 << endl;
    cout << "0.1 * v = \n" << 0.1 * v << endl;
    cout << "Doing v *= 2;" << endl;
    v *= 2;
    cout << "Now v = \n" << v << endl;
}