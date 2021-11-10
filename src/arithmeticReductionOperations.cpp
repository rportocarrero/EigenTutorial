#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program shows how to do basic arithmetic reduction operations

int main(){
    Eigen::Matrix2d mat;
    mat << 1,2,
        3,4;
    Vector2d u(-1,1), v(2,0);
    cout << "Here is mat.sum(): " << mat.sum() << endl;
    cout << "Here is mat.prod(): " << mat.prod() << endl;
    cout << "Here is mat.mean(): " << mat.mean() << endl;
    cout << "Here is mat.minCoeff(): " << mat.minCoeff() << endl;
    cout << "Here is mat.maxCoeff(): " << mat.maxCoeff() << endl;
    cout << "Here is mat.trace(): " << mat.trace() << endl;
}
