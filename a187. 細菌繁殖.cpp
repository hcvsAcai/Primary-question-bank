#include <iostream>

using namespace std;

int main()
{
    float N,M,c=0;
    cin>>N>>M;
    while(N<M)  
{  
    ++c ;   
    N*= 2.5;    
}  
    cout<<c;
}
