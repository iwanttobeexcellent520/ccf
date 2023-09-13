#include<bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0),cout.tie(0);
	int n;cin>>n;
	while(n--){
		string s;cin>>s;
		deque<int> num;deque<char>ch;
	
		int len=s.size();
		for(int i=0;i<len;i++){
			if(s[i]<='9'&&s[i]>='1')num.push_back(s[i]-'0');
			if(s[i]=='-'||s[i]=='+')ch.push_back(s[i]);
			if(s[i]=='x'){
				int n=num.back();
				num.pop_back();
				n*=(s[++i]-'0');
				num.push_back(n);
			}if(s[i]=='/'){
				int n=num.back();
				num.pop_back();
				n/=(s[++i]-'0');
				num.push_back(n);
			}
		}
		while(!ch.empty()){
			int n1,n2;n1=num.front();num.pop_front();n2=num.front();num.pop_front();
			char c=ch.front();ch.pop_front();
			if(c=='+'){
				n1+=n2;num.push_front(n1);
			}
			else {
			n1-=n2;	num.push_front(n1); 
			}
		}
		cout<<(num.front()==24?"Yes":"No")<<endl;
	}
	
	 
}
