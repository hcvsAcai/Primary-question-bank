#include <iostream>
using namespace std;
 
int main()
{
	int n,a[10],i;//宣告一個a陣列，元素量為10。
	cin>>n;//輸入一個n(輸入次數)
	for(i=0;i<n;i++)//將i歸零(陣列從0開始用)，條件為i小於n，此迴圈只會跑到(n-1)，每次迴圈都將i加一。
		cin>>a[i];//輸入一個索引值為i為的a陣列。
	for(i=n-1;i>=0;--i)//將i設為n-1(a陣列可用的最大索引值)，i>=0將i跑到0為止，0為a陣列可用的最小索引值。
		cout<<a[i]<<" ";//輸出a陣列，索引值i的東西然後空格。
	cout<<endl;//endl是換行。
}
