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
  int a[N];
  F(i, N){
    cin >> a[i];
  }
  sort(a, a+N);
  int half = N / 2;
  int mina = a[half-1];
  int maxa = a[half];
  cout << maxa - mina << endl;
  return 0;
}
