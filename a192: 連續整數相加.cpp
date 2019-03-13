#include <iostream>
using namespace std;
main ()
{
  int a,b,c,i;
  cin>>a>>b;
  c=0;
  if(a>b)
 {
    for( i=a;i>b;i--)//設i的初始職位a，比較值為i>b，迴圈做一次i就減一
    {
      cout<<i<<"+";
      c+=i;//將c + i的值存入c
    }
   cout<<b<<"="<<c+b;
 }
  if(a<b)
 {
    for( i=a;i<b;i++)
      {
        cout<<i<<"+";
        c+=i;
      }
    cout<<b<<"="<<c+b;
 }
  if(a==b)
    cout<<a<<"="<<b;
}
