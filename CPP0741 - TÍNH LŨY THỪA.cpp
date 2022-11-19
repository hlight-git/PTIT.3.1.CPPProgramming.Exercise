// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>

ll p;

ll POW(ll a, ll b)
{
    if(!b) return 1;
    if(b & 1)
    {
        ll t = POW(a, b - 1);
        return (t * a) % p;
    }
    else
    {
        ll t = POW(a, b / 2);
        return (t * t) % p;
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b;
        cin >> a >> b >> p;
        cout << POW(a, b) << endl;
    }
    return 0;
}

