#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	string number;
	cin >>number;
	stringstream arr[number.length()],arr2[number.length()];
	
	
	for (int i=0;i<number.length();i++)
	{
	int num=0;
	arr[i]<<number[i];
	arr[i]>>num;
		if(num<=9-num &&i!=0)
		{	
		
		}else if( i==0 &&num==0 ||i==0 &&num==9){
		num=9;
		} else if(i==0 &&num<=9-num)
		{
		}
		else
		{
			num=9-num;
		}
	arr2[i]<<num;
	arr2[i]>>number[i];
		
	}
	
	cout<<number;
}
