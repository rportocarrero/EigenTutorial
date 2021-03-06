#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main(){
    Matrix3f m = Matrix3f::Random();
    ptrdiff_t i, j;
    float minOfM = m.minCoeff(&i, &j);
    cout << "Here is the matrix m:/n" << m << endl;
    cout << "Its minimum coefficient (" << minOfM << ") is at position (" << i << "," << j << ")\n\n";
    RowVector4i v = RowVector4i::Random();
    int maxOfV = v.maxCoeff(&i);
    cout << "Here is the vector v" << v << endl;
    cout << "Its maximum coefficient (" << maxOfV << ") is at position " << i << endl;
}