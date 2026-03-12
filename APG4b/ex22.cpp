#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N,a,b;
  cin >> N;
  
  vector<pair<int,int>> AB(N);
  for (int i = 0; i < N; i++){
    cin >> a >> b;
    AB.at(i) = make_pair(b, a);
  }
  
  sort(AB.begin(),AB.end());
  
  for (int i = 0; i < N; i++) {
    int b, a;
    tie(b, a) = AB.at(i);  // b, a の順であることに注意
    cout << a << " " << b << endl;
  }
}