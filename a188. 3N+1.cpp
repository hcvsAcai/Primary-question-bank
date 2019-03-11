##include <iostream>

using namespace std;

int main()
{
  int n,a=1;
  cin>>n;
  while(n!=1)
  {
	  (n%2==0)?n=n/2:n=n*3+1;
    a++;
  }
   	cout<<a;
}
