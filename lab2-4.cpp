#include <iostream>
using namespace std;
int main()
 { int x = 65;
  while (x <= 90){
    cout << char(x);
    x = x + 1;
    if (x % 5 == 0){
      cout << endl;
    }
  }
  return 0;

 }