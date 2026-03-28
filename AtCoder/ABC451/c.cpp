#include <iostream>
#include <vector>
#include <queue> // 優先度付きキューに必要
using namespace std;

int main() {
    int Q;
    if (!(cin >> Q)) return 0;

    // 小さい順に取り出す設定の priority_queue
    // 型, 内部コンテナ, 比較関数
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            int h;
            cin >> h;
            pq.push(h); // $O(\log Q)$ で追加
        } 
        else if (type == 2) {
            int h;
            cin >> h;
            // 一番低い木が h 以下の間だけ、ひたすら抜く
            while (!pq.empty() && pq.top() <= h) {
                pq.pop(); // $O(\log Q)$ で削除
            }
        }

        // 現在の木の数（キューに残っている要素数）を表示
        cout << pq.size() << endl;
    }

    return 0;
}