// #include <iostream>
// #include <string>
// #include <math.h>
// #include <map>
// #include <vector>
// #include <tuple>
// #include <algorithm>
// #include <queue>
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define pii pair<int, int>
#define plli pair<lli, lli>
#define F(i,n) for(lli (i)=0;(i)<(n);(i)++)
#define FR(i,n) for(lli (i)=(n)-1;(i)>=0;(i)--)
#define FSG(i,a,b) for(lli (i)=(a);(i)<(b);(i)++)
#define FSGR(i,a,b) for(lli (i)=(b)-1;(i)>=(a);(i)--)
#define VAL(n) cout << n << endl;
#define VALD(n) cout << #n << ": " << n << endl;

int main(){

  // int queue
  cout << "=== int queue ===" << endl;
  queue<int > qi;
  qi.push(1);
  qi.push(2);
  qi.push(3);
  while(qi.size()>0){
    cout << qi.front() << endl;
    qi.pop();
  }
  cout << endl;

  // int priority_queue
  priority_queue<int> pqi;

  pqi.push(3);
  pqi.push(1);
  pqi.push(4);


  cout << "=== int priority queue ===" << endl;
  while (!pqi.empty()) {
    cout << pqi.top() << endl;
    pqi.pop();
  }

  cout << endl;

  // int reverse priority queue
  priority_queue<int, vector<int>,greater<int> > rpqi; // default less<T>

  rpqi.push(3);
  rpqi.push(1);
  rpqi.push(4);

  cout << "=== reverse int priority queue ===" << endl;
  while (!rpqi.empty()) {
    cout << rpqi.top() << endl;
    rpqi.pop();
  }
  cout << endl;

  auto c = [](plli ai,plli bi){return ai.second > bi.second;};
  cout << "=== (int, int) priority queue ===" << endl;
  priority_queue<lli, vector<plli>, decltype(c)> pqp(c);
  pqp.push(make_pair(1,2));
  pqp.push(make_pair(3,8));
  pqp.push(make_pair(2,7));
  while (!pqp.empty()) {
    cout << pqp.top().second << endl;
    pqp.pop();
  }
  return 0;
}
