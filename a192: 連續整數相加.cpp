#include <iostream>
using namespace std;
main ()
{
  int a,b,c,i;
  cin>>a>>b;
  c=0;
if(a>b)
 {
  for( i=a;i>b;i--)
 {
    cout<<i<<"+";
    c+=i;
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
