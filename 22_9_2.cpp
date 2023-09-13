#include<bits/stdc++.h>

using namespace std;
int n,x,dp[300001],ans=0;
int main(){
	cin.tie(0),cout.tie(0);
cin>>n>>x;int a[n+1];dp[0]=1;
	for(int i=1;i<=n;i++)cin>>a[i],ans+=a[i];
	for(int i=1;i<=n;i++)
		for(int j=ans;j>=a[i];j--){
			dp[j]=max(dp[j],dp[j-a[i]]);
		}
	for(int i=x;i<=ans;i++)if(dp[i]){cout<<i;break;}
	return 0;	
}