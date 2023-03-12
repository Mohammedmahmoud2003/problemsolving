#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
 
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
	init();
	int n;
	vector<int>e,u;
	stack<int>t;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int p=0;
		cin>>p;
		for(int y=0;y<p;y++)
		{
		int c=0;
		cin>>c;
		e.push_back(c);
		u.push_back(c);
		}
		int count=0;
		sort(u.begin(),u.end(), greater<int>());
		for (int f=0;f<p;f++)
		{
			if(!e.empty())
			{
			if(e.front()==u.front())
			{
			     e.erase(e.begin());
			     u.erase(e.begin());
			     count++;	
			}else
			{
			     t.push(e;
			     e.erase(e.begin());
			 
			}
			}
			
			
		}
		for(int o=0;o<t.size();o++)
		{
			if(t.font()==u.font())
			{
			t.font_pop();
			u.font_pop();	
			}
		}
		
	}
	if(e.empty&&t.empty)
	cout <<yes;
	
}
