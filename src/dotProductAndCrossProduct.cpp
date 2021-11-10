#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

// This tutorial program demonstrates calculating dot products and 
// cross products of matrices using Eigen

int main(){
    Vector3d v(1,2,3);
    Vector3d w(0,1,2);

    cout << "Dot product : " << v.dot(w) << endl;
    double dp = v.adjoint()*w; // automatic conversion of the inner product to a scalar
    cout << "Dot product via matrix product: " << dp << endl;
    cout << "Cross product:\n" << v.cross(w) << endl;
}