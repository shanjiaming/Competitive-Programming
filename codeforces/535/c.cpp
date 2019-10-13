#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define maxn 200005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
#define ms1(i) memset(i,-1,sizeof(i));
#define F first
#define S second
const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,m,k;
	while(cin >> n >> m >> k){
		while(k--){
			ll l,t,z;
			cin >> l >> t >> z;
			ll cur = n + (l-1)*m;
			if(cur>t){
				cout<<-1<<endl;
			}
			else{
				ll ans = 0;
				for(ll i=1<<22;i;i>>=1){
					int cc = ans + i;
					ll r = n + (cc - 1) * m;
					ll dif = (n + r) * cc / 2 - (n + cur-m) * (l-1) / 2;
					if(dif <= z*t && r <= t){
						ans += i;
					}
				}
				cout << ans << endl;
			}
		}
	}
}