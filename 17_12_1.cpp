#include<bits/stdc++.h>

using namespace std;

int main(){
	cin.tie(0),cout.tie(0);
	int n,subtract=0x3f3f3f3f;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
			subtract=min(subtract,abs(a[i]-a[j]));
	}
	cout<<subtract;
	return 0;	
}
