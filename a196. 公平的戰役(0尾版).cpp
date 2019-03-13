#include <iostream>

using namespace std;

int main() 
{
    int n;
    int A, B;
    while(1) //1代表的是「一定符合」，所以寫while(1)。其實把1換成任何數字都可以，只有0是代表「一定不符合」
    {                
        cin >> A >> B;
        if(A==0&&B==0) break;//如果A和B皆為0，直接離開迴圈
        if(A>B)
            cout<<"A"<<" "<<A-B<<endl;
        if(A<B)
            cout<<"B"<<" "<<B-A<<endl;
        if(A==B)
            cout<<"0"<<endl;
   }
}
