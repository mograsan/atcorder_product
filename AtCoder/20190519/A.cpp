#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N,K;
    cin >> N >> K;
    char c;
    int cnt = 0;
    while( cin >> c ){
      cnt++;
      if(cnt==K){
        c = c + 0x20;
      }
      cout << c;
      if(cnt==N){
        break;
      }
    }
    cout<<endl;
}
