#include<bits/stdc++.h>
using namespace std;

#define pb emplace_back
#define ll long long
#define maxn 400005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
const ll mod=1e9+7;
struct e{
	int l;
	int r;
	int idx;
	int f;
}cont[100005];
bool cmp(e x,e y){
	if(x.l!=y.l)
		return x.l<y.l;
	else
		return x.r<y.r;
}
bool cmp2(e x,e y){
	return x.idx<y.idx;
}
int main(void){
	ios_base::sync_with_stdio(false);
	int n;
	while(cin>>n){
		map<int,int>mp;
		int mx=0;
		f(n){
			int add;
			cin>>add;
			mx=max(mx,add);
			mp[add]++;
		}
		for(int i=1;i<=sqrt(mx);i++){
			if(mx%i)
				continue;
			if(i*i!=mx){
				mp[i]--;
				if(mp[i]==0){
					mp.erase(i);
				}
				mp[mx/i]--;
				if(mp[mx/i]==0){
					mp.erase(mx/i);
				}
			}
			else{
				mp[i]--;
				if(mp[i]==0){
					mp.erase(i);
				}
			}
		}
		int mx2=0;
		for(auto i:mp){
			mx2=max(mx2,i.first);
		}
		cout<<mx<<' '<<mx2<<endl;
	}
}