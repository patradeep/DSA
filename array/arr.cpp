#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int MN=INT_MAX;
int MX=INT_MIN;
for (int i = 0; i < n; i++)
{
    MN=min(arr[i],MN);
    MX=max(arr[i],MX);
}
cout<<MN<<" "<<MX;


return 0;
}