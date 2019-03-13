#include <iostream>

using namespace std;

int main()
{
  int G,A,U,T,W;  
  cin >> G;

  A = G+54;

  U = A*2-43;

  T = U*3-167;

  W=T/100%10+U%100/10*10;//T / 100 % 10 作為蟲洞的處理速度的百位數，U % 100 / 10 * 10 作為蟲洞的處理速度的千位數。
  
  cout << W*100 << endl;
}
