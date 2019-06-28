#include <iostream>
#include <string>
#include<math.h>
#include<map>
#include<vector>
#include <tuple>
using namespace std;
int main() {
  int S;
  cin >> S;
  int sq = S/1000;
  int hq = S/100 - 10 * (S/1000);
  int jq = S/10 - 10 * (S/100);
  int r = S%10;
  if(sq == hq || hq == jq || jq == r){
    cout << "Bad" << endl;
    return 0;
  }
  else{
    cout << "Good" << endl;
  }
  return 0;
}
