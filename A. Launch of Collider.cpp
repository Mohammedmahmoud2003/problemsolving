#include <bits/stdc++.h>
using namespace std;
int main()
{
	int number ,y=0,counter=0;
	cin>>number;
	string d;
	cin >>d;
	int arr[number];
	int arr2[number-1];
	for (int i=0;i<number ;i++)
	{
		cin >>arr[i];
	}
	for(int x=0;x<number;x++)
	{
	counter=0;
	int s =arr[x+1]-arr[x];
	for(int a=0;s>0||a<s;a++)
	{
	if (d[x]=='R' && d[x+1]=='L')
	{
	  s-=2;
	  counter++;
	}

	else
	{
		
		y++;
	}
		
	}
	

	cout<<counter;
		
	}
	
	
	
}
