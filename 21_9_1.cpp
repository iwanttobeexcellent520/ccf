#include<bits/stdc++.h>
using namespace std;

int main(){
	int minn,min_sum=0,max_sum=0,x,tem=-1;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(i==0)minn=x;
	
		max_sum+=x;
		if(x!=tem)min_sum+=x;

		tem=x;
	}
	cout<<max_sum<<endl;cout<<min_sum;
} 
