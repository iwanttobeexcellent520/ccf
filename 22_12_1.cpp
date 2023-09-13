#include<bits/stdc++.h>

using namespace std;
double x,i,k,result;
int n;
double Pow2(int K){
	double res=1;
	for(int j=0;j<K;j++){
		res*=(1+i);
	}
	return 1/res;
}
int main(){
	cin.tie(0),cout.tie(0);
	cin>>n>>i;
	for(int i=0;i<=n;i++){
		cin>>x;
		result+=x*Pow2(i);
		
	}
	cout<<result;
	return 0;	
}
