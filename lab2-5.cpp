#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int x,y;
  cout << "Please input two positive integers" <<endl;
  cin >> x;
  cin >> y;
  for (int i = x; i <= y; i++){
    if ((i % 2 != 0) && (i % 3 != 0)){
    cout << setw(3) << i;
    }
  
  }
return 0;
}

