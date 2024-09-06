#include <bits/stdc++.h>
using namespace std;

int fact(int a){
    if (a==0  || a==1)
    {
        return 1;
    }
    else{
        return a*fact(a-1);
    }
    
}
int main(){
int n,r;
cin>>n>>r;
cout<<fact(n)/(fact(n-r)*fact(r))<<endl;
return 0;
}