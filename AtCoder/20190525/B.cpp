#include <iostream>
#include <string>
#include<math.h>
#include<map>
#include<vector>
#include <tuple>
using namespace std;
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pii pair<int, int>
#define plli pair <lli, lli>
#define F(i,n) for(lli (i)=0;(i)<(n);(i)++)
#define FR(i,n) for(ll (i)=(n)-1;(i)>=0;(i)--)
#define FSG(i,a,b) for(ll (i)=(a);(i)<(b);(i)++)
#define FSGR(i,a,b) for(ll (i)=(b)-1;(i)>=(a);(i)--)
#define VALD(n) cout << #n << ": " << n << endl;

int main(){
  int r, D, x;
  cin >> r >> D >> x;
  F(i, 10){
    x = r * x - D;
    cout << x << endl;
  }
  return 0;
}
