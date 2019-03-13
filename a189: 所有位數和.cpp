#include <iostream>

using namespace std;

int main()
{
  int n,s;//設定一個s儲存當時運算的數值
  cin>>n;
  s=0;
  while( n != 0 )//當n不等於0時進入迴圈
 {  
    s += ( n%10 );   //將s存進n除10之後的結果
    n /= 10;                   
  }  
  cout<<s;
}
