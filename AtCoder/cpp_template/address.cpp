#include <iostream>
using namespace std;

int main()
{
    double x = 4.345;
    double y = 3.4;
    double* p;
    double* q;
    p = &x;
    q = &y;
    cout << "address1 is " << p << endl;
    cout << "address2 is " << q << endl;
}
