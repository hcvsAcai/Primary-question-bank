#include <iostream>

using namespace std;

int main()
{
  int n,s;
  cin>>n;
  s=0;
  while( n != 0 )
 {  
    s += ( n%10 );   
    n /= 10;                   
  }  
  cout<<s;
}
