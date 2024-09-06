#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {   char a='A';
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     cout<<endl;
    // }
    // char a='A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout<<a<<" ";
    //     }
    //         a++;
    //     cout<<endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i+1; j > 0; j--)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 0; k < n-i; k++)
    //     {
    //         cout<<i+1;
    //     }
    //     cout<<endl;

    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 0; k < i + 1; k++)
    //     {
    //         cout << k + 1;
    //     }
    //     for (int l = i; l > 0; l--)
    //     {
    //         cout << l;
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i-1; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout << "  ";
    //     }
    //     if (i > 0)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    //  for (int i = 0; i < n-1; i++)
    // {
    //    for (int  j = 0; j < i+1; j++)
    //    {
    //     cout<<" ";
    //    }
    //    cout<<"*";
    //    for (int k = 0; k < n-i-2; k++)
    //    {
    //     cout<<"  ";
    //    }
    //    if (i!=n-2)
    //    {
    //     cout<<"*";
    //    }
    //    cout<<endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < n-i-1; k++)
        {
            cout<<"  ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
     for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        for (int k = 0; k < n-i; k++)
        {
            cout<<"  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    

    return 0;
}