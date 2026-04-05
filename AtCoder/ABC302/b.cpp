#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int H,W;
  cin >> H >> W;
  
  vector<string> S(H);
  for (int i = 0; i < H; i++){
    cin >> S.at(i);
  }
  
  string target = "snuke";
  // 8方向の「行の変化」と「列の変化」をセットで用意
  int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
  int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
  
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      // 1.全てのマス（i,j)を開始地点として試す
      
      for(int d = 0; d < 8; d++){
        // 2.8方向のうち、今の方向dを試す
        bool ok = true;
        vector<pair<int,int>> result;
        
        for (int k = 0; k < 5; k++){
          // 3.今の方向dにk歩進んだ座標(ni,nj)を計算
          int ni = i + dx[d] * k;
          int nj = j + dy[d] * k;
          
          //範囲内チェック
          if (ni < 0 || ni >= H || nj < 0 || nj >= W){
            ok = false;
            break;
          }
          
          //文字一致チェック
          if (S.at(ni).at(nj) != target[k]){
            ok = false;
            break;
          }
          
          //座標を記録
          result.push_back({ni + 1,nj + 1});
        }
        
        if (ok){
          for (auto p : result){
            cout << p.first << " " << p.second << endl;
          }
          
          return 0;
        }
      }
    }
  }
}