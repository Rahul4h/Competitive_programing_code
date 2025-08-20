#include<bits/stdc++.h>
using namespace std;
const long long N=998244353;
long long fun(long long a,long long b)
{
    long long res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=res*a%N;
        }
        a=a*a%N;
        b=b>>1;
    }
    return res;
}
int main()
{
    long long n,cn=0,s=0;
    cin>>n;
    bool f=true;
    long long a[n],b[n];
    map<long long,long long>x,y;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long long j=0;j<n;j++)
    {
        cin>>b[j];
    }
    for(long long i=0;i<n;i++)
    {
        x[a[i]]=b[i];
    }
    long long m;
    cin>>m;
    long long c[m],d[m];
    for(long long i=0;i<m;i++)
    {
        cin>>c[i];
    }
    for(long long j=0;j<m;j++)
    {
        cin>>d[j];
    }
    for(long long i=0;i<m;i++)
    {
        y[c[i]]=d[i];
    }
    for(long long i=0;i<m;i++)
    {
        if(x[c[i]]==0||x[c[i]]<y[c[i]])
        {
            f=false;
            break;
        }
        else
        {
            if(x[c[i]]==y[c[i]])
            {
                cn++;
            }
        }
    }
    if(!f)
    {
        cout<<0<<endl;
    }
    else
    {
        long long r=n-cn;
        vector<long long>fact(r+1),invfct(r+1);
        fact[0]=1;
        for(long long i=1;i<=r;i++)
        {
            fact[i]=(fact[i-1]*i)%N;
        }
        invfct[r]=fun(fact[r],N-2);
        for(long long i=r-1;i>=0;i--)
        {
           invfct[i] =invfct[i+1]*(i+1)%N;
        }
       // long long r=n-cn;
        for(long long i=1;i<=r;i++)
        {
            s=(s+(fact[r])*invfct[r-i]%N*invfct[i]%N);
        }
        cout<<s+1<<endl;
    }
}
