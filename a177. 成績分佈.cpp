#include <iostream>

using namespace std;

int main()
{
  int N;//設定一個N(整數)
  cin>>N ;
  if (0<=N&&N<=100)//判斷N是否 > = 0 和 < = 100
{
  if(N>=55&&N<=65)
  cout<<"YES";
  else
  cout<<"NO";
}
  else{
  cout<<"Error";
}

}
