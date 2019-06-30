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

const int MAX = 2000;
lli combi(lli n, lli k){
  lli nume = 1;
  lli deno = 1;
  lli cnume = n;
  lli cdeno = k;
  F(i, k){
    nume *= cnume;
    cnume--;
    deno *= cdeno;
    cdeno--;
  }
  return nume / deno;
}

lli c[MAX+1][MAX+1];
void makec(lli n){
  c[0][0] = 1;
  FSG(i, 1, n+1){
    F(j, i+1){
      if(j == 0 && j == i){
        c[i][j] = 1;
      }
      else{
        c[i][j] = c[i-1][j] + c[i-1][j-1];
      }
    }
  }
}
int main(){
  cout << combi(6, 1) << endl;
  makec(MAX);
  cout << c[2000][1] << endl;
  return 0;
}
