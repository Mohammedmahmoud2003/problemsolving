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
    cin >>n;
    long long cur;
    cin>>cur;
    bool det=true;
    for(int i=0;i<n;i++)
    {
    	int ab=abs(7-cur);
    	int frist,scound;
    	cin>>frist>>scound;
    	
    	if(frist==cur||scound==cur||frist==ab||scound==ab)
    	{
    		det=false;
    	cout <<"NO";
		break;	
		}
		cur=ab;
	}
	if(det)
	cout<<"YES";
}
