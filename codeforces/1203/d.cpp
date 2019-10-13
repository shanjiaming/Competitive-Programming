#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define maxn 100005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
#define ms1(i) memset(i,-1,sizeof(i));
#define F first
#define S second

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s1,s2;
	while(cin >> s1 >> s2){
		int n = s1.size(),m = s2.size();
		int p1 = 0;
		int p2 = 0;
		int pre[n+5],suf[n+5];
		suf[n]=m;
		while(p2<m){
			if(s1[p1]==s2[p2]){
				pre[p1]=p2;
				p1++,p2++;
				
			}
			else{
				pre[p1]=p2-1; 
				p1++;
			}
		}
		for(int i = p1;i < n;i++){
			pre[i]=pre[i-1];
		}
		p1 = n-1;
		p2 = m -1;
		while(p2>=0){
			if(s1[p1]==s2[p2]){
				suf[p1]=p2;
				p1--,p2--;
			}
			else{
				suf[p1]=p2+1;
				p1--;
			}
		}
		for(int i = p1;i>=0;i--){
			suf[i]=suf[i+1];
		}
		int ans = 0;
		for(int i=1<<20;i;i>>=1){
			if(ans+i>n)continue;
			int f = 0;
			int now = ans+i;
			for(int j=0;j+now<n;j++){
				if(pre[j]+1>=suf[j+now+1]){
					f=1;
					break;
				}
			}
			if(suf[now]==0){
				f=1;
			}
			if(f){
				ans = now;
			}
		}
		cout << ans << endl;
	}
}