#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int main()
{
    int P,Q,R;
    cin >> P >> Q >> R;
    int mind = 1000;
    mind = min(P+Q, mind);
    mind = min(R+Q, mind);
    mind = min(R+P, mind);
    cout << mind << endl;
    return 0;
}
