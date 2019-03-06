#include <iostream>

using namespace std;

int main() 
{
  long a;

while(1)
   {
	cin>>a;
	if (cin.fail()) break;
	else if(a%2==1 or a%2==-1) cout<<"奇數"<<endl;
	else cout<<"偶數"<<endl; 	
   }
	
}
