#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
	int n,sum=0;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];sum+=a[i];
	}
	double al=(sum/n),Da=0; 
	for(int i=0;i<n;i++)Da+=(a[i]-al)*(a[i]-al);
	Da/=n;
	Da=sqrt(Da);
	printf("%.9lf,%.9lf",al,Da);
//	for(int i=0;i<n;i++)
//	{
//		double f=(a[i]-al)/Da;
//		printf("%.10lf\n",f); 
//	}
} 
