#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N;
  int divider = 0;
  cin >> N;
  int original_N = N;
  
  while (N > 0){
    divider += N % 10; //一番右の桁を取り出す
    N /= 10; //一番右の桁を取り除く
  }
  
  if (original_N % divider == 0){
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}