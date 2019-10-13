#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,-1,sizeof(i));
#define pb push_back
int main(){
	ll n;
    while(cin>>n){
    	string s[n+5];
    	f1(n){
    		cin >> s[i];
    		s[i] = " " + s[i];
    	}
    	int d[n+5][n+5] = {};
    	f1(n){
    		fr(j,1,n+1){
    			if(s[i][j]=='1'){
    				d[i][j] = 1;
    			}
    			else{
    				d[i][j] = 1e5;
    			}
    		}
    	}
    	f1(n){
    		d[i][i] = 1;
    	}
    	for(int k = 1 ; k <= n ; k++){
    		for(int i = 1 ; i <= n ; i++){
    			for(int  j = 1 ; j <= n ; j++){
    				if(d[i][k]+d[k][j]<d[i][j]){
    					d[i][j]=d[i][k]+d[k][j];
    				}
    			}
    		}
    	}
    	int m;
    	cin >> m;
    	vector<int>ans;
    	int fir;
    	cin >> fir;
    	ans.pb(fir);
    	int idx = 0;
   		int last = fir;
   		int nn = 0;
    	f1(m-1){
    		int add;
    		cin >> add;
    		//cout<<last<<' '<<add<<' '<<d[last][add]<<' '<<i-idx<<endl;
    		if(d[last][add]!=i-idx){

    			ans.pb(nn);
    			last = nn;
    			nn = add;
    			
    			idx = i-1;
    		}
    		else{
    			nn = add;
    		}
    	}
    	ans.pb(nn);
    	cout << ans.size()<<endl;
    	for(auto i:ans){
    		cout<<i<<' ' ;
    	}
    	cout << endl;
    }
}