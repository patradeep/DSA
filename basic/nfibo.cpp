#include <bits/stdc++.h>
using namespace std;

int nfib(int n){
    int a=0;
    int b=1;
    int c=0;
    if (n==1)
    {
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    else
    
    for (int i = 2; i < n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
int n;
cin >>n;
int result=nfib(n);
cout<<result;
return 0;
}