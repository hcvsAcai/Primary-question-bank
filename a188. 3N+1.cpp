#include <iostream>

using namespace std;

int main()
{
  int n,cnt;
  cin>>n;
  cnt=1;
  while( n != 1 )  
{  
   if( n%2 == 0 ) n/=2;     
   else n = n*3+1;           
   ++cnt ;              
}  
  cout<<cnt;
}
