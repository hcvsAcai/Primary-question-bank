#include <iostream>

using namespace std;

int main()
{
  int a ,b, c ,d ;//設定一個變數d(儲存結果)
  cin>>a>>b>>c;
  d=a;//將a的數值儲存至d
  /*判斷a b c的大小 並將結果儲存至d*/
  if(b<d)//如果條件成立將執行把b的數值儲存至d
  d=b;
  if(c<d)//如果條件成立將執行把c的數值儲存至d
  d=c;
  cout<<d;//輸出d最後的數值
}
