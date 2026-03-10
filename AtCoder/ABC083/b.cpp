#include <iostream>
using namespace std;

int SumOfDigits(int n){
  int sum = 0;
  while(n > 0){
    int digit = n % 10;
    sum += digit;
    n /= 10;
  }
  return sum;
}

int main(){
  int N,A,B;
  cin >> N >> A >> B;
  
  int total = 0;
  
  for (int i = 1; i <= N; i++){
    int sum = SumOfDigits(i);
    if (A <= sum && sum <= B){
      total += i;
    }
  }
  
  cout << total << endl;
}