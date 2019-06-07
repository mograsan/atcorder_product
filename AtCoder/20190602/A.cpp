#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int main()
{
    int N,A,B,C,D;
    cin >> N >> A >> B >> C >> D;
    int a[N];
    bool stone = false;
    string result;
    bool end = false;
    bool cont3 = false;
    int non_stone_cnt = 0;
    for(int i = 0; i < N; i++){
      char c;
      cin >> c;
      if(c == '.'){
        a[i] = 0;
        stone = false;
        non_stone_cnt++;
        if(non_stone_cnt >= 3 && i <= D - 1 && i > B - 1){
          cont3 = true;
        }
      }
      else if(c == '#'){
        a[i] = 1;
        if(stone && A - 1 < i){
          result = "No";
          end = true;
          break;
        }
        non_stone_cnt = 0;
        stone = true;
      }
    }

    if(!end){
      if(C >= D && !cont3){
        if(a[D-2] == 1){
          result = "No";
        }
        else if (D != N && a[D] == 1){
          result = "No";
        }
        else{
          result = "Yes";
        }

      }
      else{
        result = "Yes";
      }
    }
    cout << result << endl;
    return 0;
}
