#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
#define pb push_back
const int mod=1e9+7;

int main(){
	ll n;
	while(cin >> n){
		int cont[n+5] = {};
		multiset<int>st;
		f(n){
			cin >> cont[i];
			st.insert(cont[i]);
		}
		f(n){
			st.erase(st.lower_bound(cont[i]));
			cout<<*(--st.end())<<'\n';
			st.insert(cont[i]);
		}
	}

}