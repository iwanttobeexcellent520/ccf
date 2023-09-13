#include<bits/stdc++.h>

using namespace std;
int n,m,a,c=1,tem=1;
int main(){
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a;		
		tem=a*c;
		cout<<(m%tem)/c<<' ';
		c*=a;
	}
	
	
	return 0;	
}
