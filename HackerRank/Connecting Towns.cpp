#include<bits/stdc++.h>
using namespace std;

#define ll      long long
#define ini(a)  scanf("%d",&a)
#define inl(a)  scanf("%lld",&a)
#define ind(a)  scanf("%lf",&a)
#define ins(a)  scanf("%s",a)
#define pi(a)   printf("%d",a)
#define pl(a)   printf("%lld",a)
#define pd(a)   printf("%lf",a)
#define pn      printf("\n")
#define ps      printf(" ")
#define sv(v)   sort(v.begine(),v.end())
#define svi(v)  sort(v.begin(),v.end(),greater<ll>())
#define clr(a)  memset(a,0,sizeof(a))
#define mod 1234567



int main()
{
    ll t;
    inl(t);
    for(ll i=1;i<=t;i++)
    {
        ll n;
        inl(n);
        ll arr[n+1];
        for(ll j=0; j<n-1; j++)
            inl(arr[j]);
        ll ans = 1;
        for(ll j=0; j<n-1; j++)
            ans = (ans*arr[j])%mod;
        pl(ans);
        pn;
    }
    return 0;
}
