#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

//This tutorial program demonstrates transposition and 
//finding the conjugate and adjoint of matrices in the Eigen library


//NOTE: you can't do a = a.transpose()
// The transpose operation will start writing the result 
// before the evaluation is finished
// use the transposeInPlace() function for this operation

int main(){
    MatrixXcf a = MatrixXcf::Random(2,2);
    cout << "Here is the matrix a\n" << a << endl;
    cout << "Here is the matrix a^T\n" << a.transpose() << endl;
    cout << "Here is the conjugate of a\n" << a.conjugate() << endl;
    cout << "Here is the matrix a^*\n" << a.adjoint() << endl;
}