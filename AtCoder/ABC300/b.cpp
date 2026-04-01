#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  
  vector<vector<char>> A(H, vector<char>(W));
  vector<vector<char>> B(H, vector<char>(W));
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      cin >> A.at(i).at(j);
    }
  }
  
  for (int i = 0; i < H; i++){
    for (int j = 0; j < W; j++){
      cin >> B.at(i).at(j);
    }
  }
  
  for (int s = 0; s < H; s++){
    for (int t = 0; t < W; t++){
      
      bool ok = true;
      
      for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
          // Aの「ずらした先」と Bの「今の場所」を比べる
          if (A.at((i + s) % H).at((j + t) % W) != B.at(i).at(j)){
            ok = false;
          }
        }
      }
      if (ok) {
          cout << "Yes" << endl;
          return 0;
        }
    }
  }
  
  cout << "No" << endl;
  return 0;
  
}