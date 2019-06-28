#include <iostream>
#include <string>
#include<math.h>
#include<map>
#include<vector>
#include <tuple>
#include <algorithm>
using namespace std;
int main() {
  string S;
  cin >> S;
  string s[S.length()];
  for(int i = 0; i < S.length(); i++){
    s[i] = S.substr(i, 1);
    cout << s[i];
  }
  cout << endl;
  return 0;
}
