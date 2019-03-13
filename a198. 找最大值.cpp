#include <iostream>
using namespace std;

int main()
{	
        int n,a[10],i//宣告一個a陣列，元素量為10。
	cin>>n;
	for(i=0;i<n;++i)//將i歸零(陣列從0開始用)，條件為i小於n，此迴圈只會跑到(n-1)，每次迴圈都將i加一。
		cin>>a[i];//輸入一個索引值為i為的a陣列。
	int p=0,m=a[0];//設p=0, m=a[0]為最大
	for(i=1;i<n;++i)//再由a[1]~a[n-1]找最大
		if(a[i]>m)//若比m大，則換成a[i]，並記住位置
		{
			m=a[i]; p=i;
		}
	cout<<p+1<<" "<<m<<endl;//印出位置p+1及最大值m
}
