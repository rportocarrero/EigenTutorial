#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program shows the conversionbetween matrices and arrays using the Eigen library

int main(){
    MatrixXf m(2,2), n(2,2), result(2,2);
    
    m << 1,2,
        3,4;
    n << 5,6,
        7,8;

    result = m * n;
    cout << "Matrix m * n\n" << result << endl;
    result = m.array() * n.array();
    cout << "Array m * n\n" <<  result << endl;
    result = m.cwiseProduct(n);
    cout << "With cwiseProduct\n" << result << endl;
    result = m.array() + 4;
    cout << "Array m + 4\n" << result << endl;
}