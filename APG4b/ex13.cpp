#include <iostream>
#include <vector>
#include <algorithm> //max,min,absを使うのに必要
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    vector<int> vec(N);

    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
    }

    for (int i = 0; i < N; i++) {
        sum += vec.at(i);
    }

    /* 次のようにまとめられる
    for (int i = 0; i < N; i++) {
        cin >> vec.at(i);
        sum += vec.at(i);
    }
    */

    int avg = sum / N;
    
    for (int i = 0; i < N; i++) {
        cout << max(avg - vec.at(i), vec.at(i) - avg) << endl;
    }

    /*
    for (int i = 0; i < N; i++) {
        cout << abs(avg - vec.at(i)) << endl;
    }
    */

}