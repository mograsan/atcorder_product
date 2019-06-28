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
  int n, m;
  cin >> n >> m;
  lli a[n];
  vector<pii> v;
  F(i, n){
    cin >> a[i];
  }
  F(j, m){
    int b, c;
    cin >> b >> c;
    v.emplace_back(c, b);
  }
  sort(a, a + n);
  sort(v.rbegin(), v.rend());
  bool nochange = false;
  bool end = false;
  int sum = 0;
  int idx = 0;
  F(i, m){
    pii tmp = v[i];
    int cnt = tmp.second;
    if(!nochange){
      while(cnt > 0){
        if(a[idx] < tmp.first){
          idx++;
          VAL(sum);
          sum+=tmp.first;
          VAL(sum);
          cnt--;
          if(idx == n){
            break;
          }
        }
        else{
          sum+=a[idx];
          VAL(a[idx]);
          nochange = true;
          idx++;
          break;
        }
      }
    }
    else{
      sum+=a[idx];
      idx++;
      end = true;
    }
    if(idx == n){
      break;
    }
    if(end){
      break;
    }
  }
  FSG(i, idx, n){
    VAL(sum);
    sum+=a[i];
  }
  VAL(sum);
  return 0;
}
