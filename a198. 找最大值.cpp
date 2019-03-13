#include <iostream>
using namespace std;
 //非常抱歉，心力不足，請見諒。
int main()
{
	int n,a[10],i;
	cin>>n;
	for(i=0;i<n;++i)
		cin>>a[i];
	int p=0,m=a[0];
	for(i=1;i<n;++i)
		if(a[i]>m)
		{
			m=a[i]; p=i;
		}
	cout<<p+1<<" "<<m<<endl;
}
