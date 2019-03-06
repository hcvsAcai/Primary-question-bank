#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    (N%4!=0||N%100==0&&N%400!=0)? cout<<"NO": cout<<"YES";
}
