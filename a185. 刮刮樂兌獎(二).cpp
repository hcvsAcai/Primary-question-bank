#include <iostream>

using namespace std;

int main()
{
   int a,b,c,g=0;//設定一個儲存數值的變數，並歸0
   cin>>a;
   b=a%10;//經過運算後b存進a的個位數
   c=a%100/10;//經過運算後c存進a的十位數
   if(b%3==2) g += 200; //達成條件g加200
   if(c%2==1) g += 100; //達成條件g加100
   if(c==b) g += 50;  //達成條件g加50
   cout<<g;//輸出g加總後的數值
}
