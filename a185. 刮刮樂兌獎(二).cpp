#include <iostream>

using namespace std;

int main()
{
   int a,b,c,g=0;
   cin>>a;
   b=a%10;
   c=a%100/10;
   if(b%3==2) g += 200; 
   if(c%2==1) g += 100; 
   if(c==b) g += 50; 
   cout<<g;
}
