#include <iostream>
using namespace std;
int main()
{
    int h,m;
    cin >> h >> m ;
    m+=h*60;
    (m>=870 && m<=1010)? cout<<"YES": cout<<"NO";
}
