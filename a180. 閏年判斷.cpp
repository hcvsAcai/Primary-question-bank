#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    (N%4!=0||N%100==0&&N%400!=0)? cout<<"NO": cout<<"YES";//判斷N是否(N%4!=0)或者(N%100==0&&N%400!=0)
}
