#include <iostream>
#include <vector>
using namespace std;

int main() {
  int Q;
  cin >> Q;
  
  vector<int> TREE(Q);
  for (int i = 0; i < Q; i++){
    int type, height;
    int cnt = 0;
    cin >> type >> height;
    
    if (type == 1){
      TREE.at(i) = height;
      for (int j = 0; j < Q; j++){
        if (TREE.at(j) != 0){
          cnt++;
        }
      }
      cout << cnt << endl;
    }
    
    if(type == 2){
      for (int k = 0; k < Q; k++){
        if (TREE.at(k) <= height){
          TREE.at(k) = 0;
        }
        if (TREE.at(k) != 0){
          cnt++;
        }
      }
      cout << cnt << endl;
    }
    
  }
}