#include <bits/stdc++.h>
using namespace std;
vector<long> convert_to_binry(long n)
{
	 vector<long>binry;
	while(n>=2)
	{	
	 long temp=n/2;
	binry.push_back(n-temp*2);
	 n=temp;
	 
	  
	}
	binry.push_back(n);
	return binry;
}


int main(){
int n;
cin>>n;
string s="codeforces";char r=' ';
for(int i=0;i<n;i++)
{
	cin>>r;
	bool p=true;

	for(int u=0;u<s.size();u++)
	{
		if(r==s[u])
		{ p=false;
			cout<<"YES"<<endl;
		     break;
		     
		}
	}
	if(p)
	{
		cout<<"NO"<<endl;
	}
}
}

