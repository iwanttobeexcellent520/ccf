#include<bits/stdc++.h>

using namespace std;
int n,N,A[100010],r;

int main(){
	cin.tie(0),cout.tie(0);
	cin>>n>>N;
	r=N/(n+1);
	for(int i=1;i<=n;i++){
		cin>>A[i];
	}
	A[n+1]=N;
	long long error=0;
	/*
	  gi * r = i
	  i*r = j
	 */
	for(int i=1;i<=n+1;i++){//i fi
		for(int j=A[i-1];j<A[i];)//j 下标
		{
			int gi=j/r;
			int t=r*(gi+1);
			if(t>A[i])t=A[i];
			long	len=t-j;			
			j+=len;			
			error+=abs(i-gi-1)*len;
//			cout<<i-1<<' ';
		}
	}
	cout<<error;
	
	
	return 0;	
}
