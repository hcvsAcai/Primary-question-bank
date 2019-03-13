#include <iostream>

using namespace std;

int main()
{
    float N,M,c=0;//設定一個c代表迴圈重複的次數
    cin>>N>>M;
    while(N<M)  //當N<M進入迴圈
{  
    c++ ; //c的數值加一  
    N*= 2.5;    
}  
    cout<<c;
}
