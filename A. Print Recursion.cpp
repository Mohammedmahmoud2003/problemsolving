#include <bits/stdc++.h>
using namespace std;
void print (int num)
{
	cout <<num;
	if (num==1)
	{
		return ;
	}cout <<" ";
	 print(num-1);
	
}
int main()
{
	int x;
	cin>>x;
	print (x);
}
