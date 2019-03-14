#include <iostream>

using namespace std;

int main()
{
  int A,B;
  cin>>A>>B;
  /*判斷A B大小關係，並輸出A B之關係式*/
  if(A<B)
    cout<<A<<"<"<<B;
  if(A>B)
    cout<<A<<">"<<B;
  if(A==B)
    cout<<A<<"="<<B;
}
