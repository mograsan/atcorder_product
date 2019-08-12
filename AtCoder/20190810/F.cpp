#include <iostream>
#include <string>
#include <math.h>
#include <map>
#include <vector>
#include <tuple>
#include <algorithm>
#include <stdlib.h>
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

int comp(const string *a, const string *b){
  if (*a < *b)
        return (-1);
    else if (*a > *b)
        return (1);
    return (0);
}

int main(){
  int N;
  cin >> N;
  string s[N];

  F(i, N){
    string st;
    cin >> st;
    vector<string> vec;
    for(int j = 0; j < 10; j++){
      vector = st.substr(j, 1);
    }
    string tmps;
    tmps = tmp[0];
    FSG(j, 1, 10){
      tmps = tmps + tmp[j];
    }
    s[i] = tmps;
    cout << s[i] << endl;
  }
  return 0;
}
