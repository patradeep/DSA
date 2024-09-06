#include <iostream>
using namespace std;

bool isprime(int n){
    if (n==0 || n==1)
    {
        return 0;
    }
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        return true;
        
    }
    
    
}

int main()
{
    int num1,num2;
    cin>>num1>>num2;
    for (int i = num1 ; i < num2; i++)
    {
        if(isprime(i))
        cout<<i<<endl;
    }
    
    return 0;
}