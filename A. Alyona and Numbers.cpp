#include <bits/stdc++.h>
using namespace std;
int main ()
{
int n,m;
cin >>n>>m;
int counter=0;
for (int i=1;i<=n;i++)
{ 
for(int r=1;r<=m;r++)
   {
    if((i+r)%5==0)
     {    counter++;
      }

   }
	
}
cout<<counter;	
}
