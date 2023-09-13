#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)cin>>a[i];
	int ans=1,tem=a[0];
	for(int i=1;i<n;i++){
		if(a[i]!=tem)ans++;
		tem=a[i];
	}
	cout<<ans;
	return 0;
}
