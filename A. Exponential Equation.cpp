#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
 
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main(){
	init();
    long long n = 0;
    cin >> n;
    while(n--)
    { 
     long long h;
     cin>>h;
     bool c=false;
     for(int i=1;i<cbrt(h);i++)
     
     {
	  for(int q=1;q<cbrt(h);q++)
     {
     	if((pow(i,q)*q+pow(q,i)*i)==h)
     	{
     		cout<<i<<" "<<q<<endl;
     		c =true;
		 }
		 if(c)
		 {
		  break;
		 }
     	
	 }
	 if(c)
		 {
		  break;
		 }
	 }
	 if(!c)
		 {
		    cout<<-1<<endl;
		 }
		 
		 }
		 
		 }
