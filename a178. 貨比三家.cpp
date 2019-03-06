#include <iostream>

using namespace std;

int main()
{
  int a ,b, c ,d ;
  cin>>a>>b>>c;
  d=a;
  if(b<d) 
  d=b;
  if(c<d)  
  d=c;
  cout<<d;
}
