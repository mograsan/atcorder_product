#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pii pair<int, int>
#define plli pair <lli, lli>
#define F(i,n) for(lli (i)=0;(i)<(n);(i)++)
#define FR(i,n) for(lli (i)=(n)-1;(i)>=0;(i)--)
#define FSG(i,a,b) for(lli (i)=(a);(i)<(b);(i)++)
#define FSGR(i,a,b) for(lli (i)=(b)-1;(i)>=(a);(i)--)
#define VAL(n) cout << n << endl;
#define VALD(n) cout << #n << ": " << n << endl;

int main(){
  int N;
  cin >> N;
  int result = 0;
  if(N < 10){
    result = N;
  }
  else if (N < 100){
    result = 9;
  }
  else if (N < 1000){
    result = 9 + (N-99);
  }
  else if (N < 10000){
    result = 9 + 900;
  }
  else if (N < 100000){
    result = 9 + 900 + (N-9999);
  }
  else {
    result = 90909;
  }
  cout << result << endl;
  return 0;
}
