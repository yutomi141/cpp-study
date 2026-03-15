#include <iostream>
using namespace std;

int main() {
  int H,W,Q;
  cin >> H >> W >> Q;
  
  for (int i = 0; i < Q; i++){
    int type, query;
    cin >> type >> query;
    if (type == 1){
      cout << query * W << endl;
      H -= query;
    }
    if (type == 2){
      cout << query * H << endl;
      W -= query;
    }
  }
}

/*
#include <iostream>
using namespace std;

int main() {
    // 1. 変数名は意味がわかるように（h, w は小文字が一般的）
    long long h, w; 
    int q;
    cin >> h >> w >> q;

    for (int i = 0; i < q; i++) {
        int type;
        long long val; // R または C
        cin >> type >> val;

        if (type == 1) {
            // タイプ1: 行を消す（横幅 w は変わらない）
            cout << val * w << endl;
            h -= val;
        } else if (type == 2) { 
            // 2. else if を使うことで、type1 じゃない時だけ判定させる（微加速＆可読性）
            cout << val * h << endl;
            w -= val;
        }
    }
}
*/