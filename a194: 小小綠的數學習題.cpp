#include <iostream>

using namespace std;
 
int main(  )
{
  int a,b;
  char c ;//設定一個c(字元)
  cin>>a>>c>>b;
  if(c=='+')//如果c輸入一個"+"則進行a+b
    cout<<a+b<<endl;
  if(c=='-')//如果c輸入一個"-"則進行a-b
    cout<<a-b<<endl;
  if(c=='*')//如果c輸入一個"*"則進行a*b
    cout<<a*b<<endl;
 }
