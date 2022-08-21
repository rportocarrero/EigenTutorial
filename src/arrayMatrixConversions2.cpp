#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program shows an alternative conversion between matrices and arrays using the Eigen library

int main(){
    MatrixXf m(2,2), n(2,2), result(2,2);
    
    m << 1,2,
        3,4;
    n << 5,6,
        7,8;

    result = (m.array() + 4).matrix() * n;
    cout << "Combination 1:\n" << result << endl;
    result = (m.array() * n.array()).matrix() * m;
    cout << "Combination 2:\n" << result << endl;
}