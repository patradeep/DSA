#include <bits/stdc++.h>
using namespace std;

void ls(int n,int arr[],int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            cout<<key<<" is present in index "<<i<<endl;
        }
        
    }
    cout<<"Not present"<<endl;
    
}

void bs(int n,int arr[],int key){
    int s=0;
    int l=n;
    while (s<=l)
    {
       int m=(s+l)/2; 
       if (arr[m]==key)
       {
        cout<<"Found in "<<m<<endl;
        return;
       }
       else if (arr[m]>key)
       {
        l=m-1;

       }
       else{
        s=m+1;
       }
       
       
    }
    cout<<"Not present"<<endl;
    
}
int main(){
int n,key;
cin>>n>>key;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

// ls(n,arr,key);
bs(n,arr,key);
return 0;
}