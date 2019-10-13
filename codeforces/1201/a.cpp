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
	ll n,m;
	while(cin >> n >> m){
		string s[n+5];
		f1(n){
			cin>>s[i];
		}
		ll cont[m+5] = {};
		f(m)cin >> cont[i];
		ll ans = 0;
		f(m){
			ll cnt[5] = {};
			fr(j,1,n+1){
				cnt[s[j][i]-'A']++;
			}
			ll mx = 0;
			fr(j,0,5){
				mx = max(mx,cnt[j]);
			}
			ans += mx * cont[i];
		}
		cout << ans << endl;
	}
}