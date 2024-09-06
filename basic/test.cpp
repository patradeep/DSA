// #include <bits/stdc++.h>
// using namespace std;

// void pt(int x, int y, int z)
// {
//     int a = max(x, max(y, z));
//     int b, c;
//     if (a == x)
//     {
//         b = y;
//         c = z;
//     }
//     else if (a == y)
//     {
//         b = x;
//         c = z;
//     }
//     else
//     {
//         b =x;
//         c=y;
//     }
//     if (pow(a,2)==pow(b,2)+pow(c,2))
//     {
//         cout<<"Yes";

//     }
//     else{
//         cout<<"No";
//     }
    
// }
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     pt(a, b, c);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// void OtoD(int a){
//     int r=0;
//     int x=1;
//     while (a>0)
//     {
//         int l =a%10;
//         r+=l*x;
//         x*=8;
//         a/=10;
        
//     }
//     cout<<r;
// }
// int main(){
// int a;
// cin>>a;
// OtoD(a);
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;

char DtoHD(int a){
    int x=0;
    char b[100];
    string c="";
    while (a>0)
    {
        int l=a%16;
        if (l<10)
        {
            b[x]=l+48;
            c=c+to_string(l);
            x++;
        }
        else{
            b[x]=l+55;
            char cc='A'+l-10;
            c.push_back(cc);
            x++;
        }
        a/=16;
        

    }
    for ( int y = x-1;  y >= 0;  y--)
    {
        cout<<b[y];
    }
    cout<<endl;
    reverse(c.begin(), c.end()); 
    cout<<c;
    
    
    
}
int main(){
int a;
cin>>a;
DtoHD(a);
return 0;
}