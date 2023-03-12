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
	int sum=0;
    vector<int>arr(101,0);
    for(int i=0;i<5;i++)
    {
    	int f=0;
    	cin>>f;
    	sum+=f;
    	arr[f]++;
    	
	}

	int i=0;
	int mix=0;
	while(i<=100)
	{
		if(arr[i]>1)
	mix=max(mix,(i)*min(arr[i],3));i++;
    }
   
cout<<sum-mix;
}
    
