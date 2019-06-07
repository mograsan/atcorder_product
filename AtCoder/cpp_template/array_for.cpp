#include <iostream>
using namespace std;
int main()
{
    int score[5] = {1, 2, 3, 4, 5};
    for(int s : score)
    {
        cout << s << endl;
    }

    // vector<int> count{1, 2, 3, 4, 5};
    // for(auto&& x : count) {
    //     cout << x << endl;
    // }
}
