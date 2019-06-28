#include <iostream>
#include <string>
#include<math.h>
#include<map>
#include<vector>
using namespace std;

struct diff_coord{
  int x_coord;
  int y_coord;
};
int main(){
  int N = 0;
  cin >> N;
  int x[N];
  int y[N];

  for(int i = 0; i < N; i++){
    cin >> x[i] >> y[i];
  }
  for(int i = 0; i <= N-2; i++){
    for(int j = 0; j <= N-2-i; j++){
      if(x[j] > x[j+1]){
        int tmp = 0;
        tmp = x[j];
        x[j] = x[j+1];
        x[j+1] = tmp;
        tmp = y[j];
        y[j] = y[j+1];
        y[j+1] = tmp;
      }
  }
  int diff_x[N][N];
  int diff_y[N][N];
  map<diff_coord, vector<int> > dmap;
  map<diff_coord, int> cnt_map;
  int max_x;
  int max_y;
  int max_cnt = 0;
  for(int j = 0; j < N-1; j++){
    for(int k = 1; k <= N-1-j; k++){
      int tmp_x = 0;
      tmp_x = x[j+k]-x[j];
      int tmp_y = 0;
      tmp_y = y[j+k]-y[j];
      diff_x[j][j+k] = tmp_x;
      diff_y[j][j+k] = tmp_y;
      if(dmap.count({tmp_x, tmp_y}) == 0){
        vector<int> tmp_v;
        tmp_v.push_back(j+k);
        tmp_y.push_back(j);
        dmap[{tmp_x, tmp_y}] = tmp_v;
        cnt_map[{tmp_x, tmp_y}] = 1;
      }
      else{
        vector<int> tmp_v;
        tmp_v = dmap[{tmp_x, tmp_y}]
        tmp_v.push_back(j+k);
        tmp_y.push_back(j);
        dmap[{tmp_x, tmp_y}] = tmp_v;
        cnt_map[{tmp_x, tmp_y}] = cnt_map[{tmp_x, tmp_y}] + 1;
      }
      if(max_cnt < cnt_map[{tmp_x, tmp_y}]){
        max_cnt = cnt_map[{tmp_x, tmp_y}];
        max_x = tmp_x;
        max_y = tmp_y;
      }
    }
  }

  return 0;
}
