##include <iostream>

using namespace std;

int main()
{
  int n,a=1;//a的初始值為一
  cin>>n;
  while(n!=1)//n不等於1時進入迴圈
  {	
	(n%2==0)?n=n/2:n=n*3+1;//判斷是否n除2的餘數為0，然後針對結果作運算
   	a++;//a加1
  }
   cout<<a;
}
