#include <iostream>

using namespace std;

int main()
{
  int G,A,U,T,W;  
  cin >> G;

  A = G+54;

  U = A*2-43;

  T = U*3-167;

  W=T/100%10+U%100/10*10;
  
  cout << W*100 << endl;
}
