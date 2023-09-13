#include<bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(0),cout.tie(0);
	int n,k,len=0,w=0;cin>>n>>k;int a=0;
	
	for(int j=0;j<n;j++){
		cin>>a;
		w+=a;
		if(j==(n-1)&&w<k)len++;
		if(w>=k){len++;w=0;}		
	}
	cout<<len;
	
	return 0;	
}
