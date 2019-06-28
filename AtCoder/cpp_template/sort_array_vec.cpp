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
  int a[9] = {3, 4, 7, 1, 1, 3, 9, 2, 8};
  vi v;
  v.emplace_back(8);
  v.emplace_back(2);
  v.emplace_back(3);
  v.emplace_back(7);
  v.emplace_back(0);
  v.emplace_back(6);
  sort(a, a + 9);
  VAL("===== sorted array =====");
  F(i, 9){
    VAL(a[i]);
  }
  sort(v.begin(), v.end());
  VAL("===== sorted vector =====");
  F(i, 6){
    VAL(v[i]);
  }
  VAL("===== reverse sorted vector =====");
  sort(v.rbegin(), v.rend());
  F(i, 6){
    VAL(v[i]);
  }
  return 0;
}
