#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int rest[N];
    int a[N];
    string str[N];
    for(int i = 1; i <= N; i++){
      string s;
      int sc;
      cin >> s >> sc;
      rest[i-1] = i;
      str[i-1] = s;
      a[i-1] = sc;
    }
    for(int i = 0; i <= N-2; i++){
      for(int j = 0; j <= N-2-i; j++){
        if(str[j] > str[j+1]){
          string tmp = str[j];
          str[j] = str[j+1];
          str[j+1] = tmp;
          int tmpr = rest[j];
          rest[j] = rest[j+1];
          rest[j+1] = tmpr;
        }
        else if(str[j] == str[j+1] && a[rest[j]-1] < a[rest[j+1]-1]){
          string tmps = str[j];
          str[j] = str[j+1];
          str[j+1] = tmps;
          int tmpre = rest[j];
          rest[j] = rest[j+1];
          rest[j+1] = tmpre;
        }
      }
    }
    for(int i = 0; i <= N-1; i++){
      cout<<rest[i]<<endl;
    }
}
