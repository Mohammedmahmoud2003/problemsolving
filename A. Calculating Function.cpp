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
    
    
    
      if (n % 2 == 0)
        {
            cout<<n/2;
        }else if(n==1)
        {
        	cout<<-1;
		}
        else
        {
		long long d=(n-1)/2;
            cout<<d-n;
        }
    
      
}
 
