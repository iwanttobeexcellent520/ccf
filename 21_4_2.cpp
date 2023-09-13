#include<bits/stdc++.h>
using namespace std;
int mp[602][602],r,L,n,pre[602][602],ans=0;
double t;
int main(){
	cin.tie(0),cout.tie(0);
	cin>>n>>L>>r>>t;
	for(int i=0;i<=n;i++)mp[0][i]=mp[i][0]=0;
	for(int i=0;i<=n;i++)for(int j=0;j<=n;j++)pre[i][j]=0;
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)
	{
	cin>>mp[i][j];	
	pre[i][j]=pre[i-1][j]+pre[i][j-1]+mp[i][j]-pre[i-1][j-1];
	}
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)
	{
		int x1=max(1,i-r),x2=min(n,i+r),y1=max(1,j-r),y2=min(n,j+r);
		double sum1=pre[x2][y2]-pre[x1-1][y2]-pre[x2][y1-1]+pre[x1-1][y1-1];
		double sum2=(x2-x1+1)*(y2-y1+1);
		if((sum1/sum2)*1.0<=t)ans++; 

	}
	cout<<ans;
	
	
	
} 
