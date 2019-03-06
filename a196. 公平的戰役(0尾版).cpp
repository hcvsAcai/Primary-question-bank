#include <iostream>

using namespace std;

int main() 
{
    int n;
    int A, B;
while(1)
   {                
    cin >> A >> B;
    if(A==0&&B==0) break; 
    if(A>B)
    cout<<"A"<<" "<<A-B<<endl;
    if(A<B)
    cout<<"B"<<" "<<B-A<<endl;
    if(A==B)
    cout<<"0"<<endl;
   }
}
