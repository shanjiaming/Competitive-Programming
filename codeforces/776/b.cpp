#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define maxn 1000005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i));
const ll mod=1e9+7;
bool isp(int x){
	for(int i = 2 ; i <= (int)sqrt(x) ; i++){
		if(x%i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	srand(time(NULL));
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin >> n){
		if(n <= 2){
			cout<< 1 << endl;
			f(n){
				cout<< 1 << ' ';
			}
			cout<<endl;
		}
		else{
			cout << 2 << endl;
			f1(n){
				if(isp(i+1)){
					cout << 1 << ' ';
				}
				else{
					cout<< 2 << ' ';
				}
			}
			cout<<endl;
		}
	}
}