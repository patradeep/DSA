#include <iostream>
using namespace std;
int main(){
int a;
cin>>a;
for (int i = 1; i <= a; i++)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<" * ";
    }
    for (int k = a-i; k >= 1; k--)
    {
        cout<<"      ";
    }
    for (int j = 1; j <= i; j++)
    {
        cout<<" * ";
    }
    cout<<endl;
    
    
}
for (int i = a; i >= 1; i--)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<" * ";
    }
    for (int k = a-i; k >= 1; k--)
    {
        cout<<"      ";
    }
    for (int j = 1; j <= i; j++)
    {
        cout<<" * ";
    }
    cout<<endl;
    
    
}

return 0;
}