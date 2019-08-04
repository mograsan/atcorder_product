#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <vector>
#include <tuple>
#include <set>
#include <iterator>
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
  int n, m;
  cin >> n >> m;
  vi vec;
  F(i, n){
    vi tmp(vec.size());
    int l, r;
    F(j, r-l+1){
      tmp.emplace_back(l+j);
    }
    if(vec.size()==0){
      copy(tmp.begin(), tmp.end(), vec.begin());
    }
    else{
      vi intersect;
      set_intersection(tmp.begin(), tmp.end(), vec.begin(), vec.end(), inserter(intersect, intersect.end()));
      copy(intersect.begin(), intersect.end(), vec.begin());
    }
  }
  cout << vec.size() << endl;
  return 0;
}
