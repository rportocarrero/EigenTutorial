#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program demonsrtates matrix and vector multiplication

int main(){
    Matrix2d mat;
    mat << 1,2,
        3,4;
    Vector2d u(-1,1), v(2,0);
    cout << "Here is mat*mat\n" << mat*mat << endl;
    cout << "Here is mat*u\n" << mat*u << endl;
    cout << "Here is u^T*mat\n" << u.transpose()*mat << endl;
    cout << "Here is u^T*v\n" << u.transpose()*v << endl;
    cout << "Here is u*v^T\n" << u*v.transpose() << endl;
}