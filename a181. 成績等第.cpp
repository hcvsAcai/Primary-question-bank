#include <iostream>

using namespace std;

int main()
{
  int  N (0<=N<=100) ;
  cin>>N;
  /*判斷N的所在範圍，並輸出對應級別*/
  if(N>=90&&N<=100)
    cout<<"A";
  if(N>=80&&N<90)
    cout<<"B";
  if(N>=70&&N<80)
    cout<<"C";
  if(N>=60&&N<70)
    cout<<"D";
  if(N<60)
    cout<<"E";
}
