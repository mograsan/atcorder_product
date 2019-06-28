#include <iostream>
#include <string>
#include<math.h>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){
  int W, H, x, y;
  double men = 1.0;
  int way = 0;
  cin >> W >> H >> x >> y;
  men = double(W) * double(H) / 2.0;
  if(x == W / 2.0 && y == H / 2.0){
    way = 1;
  }
  cout << fixed << setprecision(12) << men << " " << way << endl;
  return 0;
}
