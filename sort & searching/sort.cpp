#include <bits/stdc++.h>
using namespace std;

int SS(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[n];
}

int BS(int n,int arr[]){
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n-i; j++)
    {
        if (arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        
    }
    
}
return arr[n];
}
int IS(int n,int arr[]){
    for (int i = 1; i < n; i++)
    {   
        int j=i-1;
        while (arr[j]>arr[j+1] &&j>=0)
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--;
        }
        
    }
    return arr[n];
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // SS(n, arr);
    // BS(n,arr);
    IS(n,arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}