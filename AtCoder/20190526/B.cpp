#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if((n/100 == 0 || n/100 >= 13)&& n%100 >= 1 && n%100 <= 12){
      cout<<"YYMM"<<endl;
    }
    else if((n%100 == 0 || n%100 >= 13)&& n/100 >= 1 && n/100 <= 12){
      cout<<"MMYY"<<endl;
    }
    else if(1 <= n/100 && n/100 <= 12 && 1 <= n%100 && n%100 <= 12){
      cout<<"AMBIGUOUS"<<endl;
    }
    else{
      cout<<"NA"<<endl;
    }
    return 0;
}
