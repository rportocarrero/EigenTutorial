#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program demonstrates array indeixing of Eigen arrays

int main(){
    ArrayXXf m(2,2);

    //assign values by coefficient
    m(0,0) = 1.0;
    m(0,1) = 2.0;
    m(1,0) = 3.0;
    m(1,1) = m(0,1) + m(1,0);

    // print values to stdout
    cout << m << endl << endl;

    // comma initialization
    m << 1.0,2.0,3.0,4.0;

    cout << m << endl;
}