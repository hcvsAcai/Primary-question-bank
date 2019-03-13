#include <iostream>
using namespace std;
int main()
{
    int h,m;
    cin >> h >> m ;
    m+=h*60;//將輸入的變數做運算後儲存進m
    (m>=870 && m<=1010)? cout<<"YES": cout<<"NO";//判斷m是否( >=870 )和( <=1010 )
}
