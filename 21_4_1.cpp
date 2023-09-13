#include<bits/stdc++.h>
using namespace std;
int arr[260];
int main(){
	cin.tie(0),cout.tie(0);
	int n,m,L;
	cin>>n>>m>>L;
	for(int i=0;i<=256;i++)arr[i]=0;
	for(int i=0;i<n;i++)for(int j=0;j<m;j++){
		int x;cin>>x;
		arr[x]++;
	}
	for(int i=0;i<L;i++)cout<<arr[i]<<' ';
} 
