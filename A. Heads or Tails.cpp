#include <bits/stdc++.h>
using namespace std;
int main ()
{
int x,y,a,b;
vector<pair<int , int> >pro;
pair<int , int> det;
cin >>x>>y>>a>>b;
if(x<=b&&a<=b)
{cout <<0;
return 0;
}

for(int j=a;j<=x;j++)
{
	for(int i=b;i<=y;i++)
	{
		if(j>i)
		{
			det.first =j;
			det.second =i;
			pro.push_back(det);
		
			
		}
	}
}
cout<<pro.size()<<endl;
for(int i=0;i<pro.size();i++)
{
	cout<<pro[i].first <<" "<<pro[i].second<<endl;
}
}
