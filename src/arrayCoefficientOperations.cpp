#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program demonstrates array coefficient operations with the Eigen library

int main(){
    ArrayXf a = ArrayXf::Random(5);
    a *= 2;
    cout << "a = \n" << a << endl;
    cout << "a.abs() =n" << a.abs() << endl;
    cout << "a.abs().sqrt() = \n" << a.abs().sqrt() << endl;
    cout << "a.min(a.abs().sqrt()) = \n" << a.min(a.abs().sqrt()) << endl;
}