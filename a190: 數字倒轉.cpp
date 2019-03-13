/*N -> 12345 -> 1234 -> 123 ->  12  ->    1   ->     0
  M ->    0     ->     5   ->  54 -> 543 -> 5432 -> 54321  示意圖*/
#include <iostream>

using namespace std;

int main()
{
  int n,s;//設定一個儲存數值的s
  cin>>n;
  s = 0;  
  while( n != 0 ) //當n不等於0時進入迴圈 
  {                      
    s = s * 10 + ( n%10 );//將 s X 10 + ( n%10 )  運算後的結果存入s  
    n /= 10;                 
  }  
  cout<< s;
}
