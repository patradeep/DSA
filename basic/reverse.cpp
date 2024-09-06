#include <iostream>
using namespace std;
int main(){
int num;
cin>>num;
int r=0;
while(num>0)
{
    int last=num%10;
    r=(r*10)+last;
    num=num/10;
}
cout<<r;

return 0;
}