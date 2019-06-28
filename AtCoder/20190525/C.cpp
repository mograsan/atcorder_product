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
  int cnt = 0;
  int min = 0;
  int max = 0;
  F(i, m){
    int l, m;
    cin >> l >> m;
    if(i!=0){
      if(max < l || min > m){
        cnt = 0;
        break;
      }
      else if(min < l && max >= l && max <= m){
        min = l;
        cnt = max - min + 1;
      }
      else if(l <= min && min <= m && m < max){
        max = m;
        cnt = max - min + 1;
      }
      else if(min < l && max > m){
        max = m;
        min = l;
        cnt = max - min + 1;
      }
    }
    else{
      min = l;
      max = m;
      cnt = max - min + 1;
    }
  }
  cout << cnt << endl;
  return 0;
}
