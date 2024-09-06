#include <bits/stdc++.h>
using namespace std;

void MX(int n,int arr[]){
    int MXno=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (MXno<arr[i])
        {
            MXno=arr[i];
        }
    }
cout<<MXno;
}
void sum_subarr(int n, int arr[])
{
    int sum = 0;
    int Tsum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << " ";
            Tsum += sum;
        }
        cout << endl;
    }
    cout << endl;
    cout << Tsum;
}
void MX_A_SA(int n,int arr[]){
    int c=2;
    int ans=INT_MIN;
    int d=arr[1]-arr[0];
    for (int i = 2; i < n; i++)
    {
        if (d==(arr[i]-arr[i-1]))
        {
            c++;
        }
        else{
            d=arr[i]-arr[i-1];
            c=2;
        }
        ans=max(ans,c);

    }
    cout<<ans;
}
void Racord_Braking_Day(int n, int arr[])
{
    int MX = INT_MIN;
    int c=0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > arr[i + 1] && arr[i] > MX)
        {
            cout << i+1 << " is a Racord bracking day!!" << endl;
            c++;

        }
          MX = max(arr[i], MX);
    }
    cout<<c;
}

int min_index(int n, int arr[])
{

    int N = 10000;
    int a[N];
    int minimum = n + 1;

    for (int i = 0; i < N; i++)
        a[i] = -1;

    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        if (a[temp] == -1)
            a[temp] = i;
        else
            minimum = min(minimum, a[temp]);
    }
    return minimum;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];

    cout << "Enter Values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sum_subarr(n, arr);
    // MX(n,arr);
    // MX_A_SA(n, arr);
    // Racord_Braking_Day(n,arr);

    // int result = min_index(n, arr);
    // cout << "Index is: " << result;

    return 0;
}