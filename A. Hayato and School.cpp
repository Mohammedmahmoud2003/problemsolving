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
    { bool q=true;
    	int num_len=0;
    	cin>>num_len;
    	int arr[num_len];
    	for(int i=0;i<num_len;i++)
    	{
    	cin>>arr[i];	
		}
		
		for(int r=0;r<num_len;r++)
		{
		  int p=arr[r];
		for(int e=0;e<num_len;e++)
		{int w=arr[e];
		for(int y=0;y<num_len;y++)
		{
			int x=arr[y];
			if((x+w+p)%2!=0&&y!=e&&e!=r&&y!=r)
			{
				cout<<"YES";
				q=false;
				cout<<endl<<r+1<<' '<<e+1<<" "<<y+1<<endl;
				
				
			}
			if(!q)
			{
				break;
			}
			
		}
		if(!q)
			{
				break;
			}	
		}
		if(!q)
			{
				break;
			}	
		}
		if(q)
		{cout<<"NO"<<endl;
		}
		
    	
	}
}
    
    
