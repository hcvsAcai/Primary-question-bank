#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   while( n%2==0 ) //當n / 2 的餘數=0進入迴圈 
   n/=2;
   cout<<n;
}
