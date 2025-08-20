#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x,s=0;
        cin>>n>>x;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
            if(x>0)
            {
                s=s&a[i];
                x--;
            }
            else
            {
                s=s|a[i];
            }
        }
        cout<<s<<endl;
    }
}
