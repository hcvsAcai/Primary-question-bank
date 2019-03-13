#include <iostream>
using namespace std;

int main()
{	
	
	cin>>n;
	for(i=0;i<n;++i)//將i歸零(陣列從0開始用)，條件為i小於n，此迴圈只會跑到(n-1)，每次迴圈都將i加一。
		cin>>a[i];//輸入一個索引值為i為的a陣列。
	int p=0,m=a[0];
	for(i=1;i<n;++i)
		if(a[i]>m)
		{
			m=a[i]; p=i;
		}
	cout<<p+1<<" "<<m<<endl;
}
