#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define maxn 500005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	ll b,d,s;
	while(cin >> b>>d>>s){
		ll mx=max({b,d,s});
		ll ans = 0;
		if(b<mx-1){
			ans += mx-1-b;
		}
		if(d<mx-1){
			ans += mx-1-d;
		}
		if(s<mx-1){
			ans += mx-1-s;
		}
		cout << ans << endl;
	}
	
}