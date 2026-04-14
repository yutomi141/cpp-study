#include <iostream>
#include <vector>
using namespace std;

int main() {
  string p,q;
  cin >> p >> q;
  
  vector<pair<int,string>> line;
  line.push_back(make_pair(0,"A"));
  line.push_back(make_pair(3,"B"));
  line.push_back(make_pair(4,"C"));
  line.push_back(make_pair(8,"D"));
  line.push_back(make_pair(9,"E"));
  line.push_back(make_pair(14,"F"));
  line.push_back(make_pair(23,"G"));
  
  int P,Q;
  for(int i = 0; i < 7; i++){
    if (line.at(i).second == p){
      P = line.at(i).first;
    }
    if (line.at(i).second == q){
      Q = line.at(i).first;
    }
  }
  
  cout << abs(P - Q) << endl;
  
}