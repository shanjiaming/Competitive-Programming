#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define maxn 300005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
#define ms1(i) memset(i,-1,sizeof(i));
#define bg begin()
#define ed end()
#define pii pair<int,int>
const ll mod = 1e9+7;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<ll>v;
	f(3){
		ll add;
		cin >> add;
		v.pb(add);
	}
	ll d;
	cin >> d;
	sort(v.begin(),v.end());
	ll ans = max(d-(v[1]-v[0]),0LL)+max(d-(v[2]-v[1]),0LL);
	cout << ans << endl;

}