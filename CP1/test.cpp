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

int main(){
	int n;
	int f = 0;
	string s;
	cin >> s;
	n = s.size();
	int pos=0,nxt = 0;
	string g="heidi";
	while(pos<5&&nxt < n){
		if(s[pos] == g[nxt]){
			nxt++,pos++;
		}
		else{
			pos ++;
		}
	}
	cout<<(nxt>=5?"YES":"NO")<<endl;
}