#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cin >> str;
  
  int cnt=0;  //모음의 개수
  for(int i=0; i<str.size(); i++) {
      if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') cnt++;
  }
  
  cout << cnt <<"\n";
}
