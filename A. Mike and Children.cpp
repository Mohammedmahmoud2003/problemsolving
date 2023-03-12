#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	int swet;
	cin >>swet;
	int s_swet[swet];
	for (int a=0;a<swet;a++)
	{
		cin >>s_swet[a];
	}
	sort(s_swet,s_swet+swet);
	int n=0 ,s=0;
	int e=swet-1;
 int counter =0;
	int t=s_swet[0]+s_swet[swet-1];
	while (s<(swet%2==0?swet/2:swet/2+1))
	{  
		if (t==s_swet[e]+s_swet[n])
		{
		   counter++;
		   e--;
		   n++;	
		} else if (t>s_swet[e]+s_swet[n]) 
		{
			n++;
		}else
	     {
		     e--;
		 }
		s++;
	}
	cout <<counter;
}
