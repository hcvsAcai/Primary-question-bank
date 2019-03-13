#include <iostream>

using namespace std;
 
int main(  )
{
  int n,i;
  cin>>n;
  i=0;
  for(i=n;i>=1;i--)//設i的起始值為n，比較值範圍為i>=1，做一次i就減一
 {
    cout<<i<<" ";
    n--;
 }
  cout<<"0";
}
