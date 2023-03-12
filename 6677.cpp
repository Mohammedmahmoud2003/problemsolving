#include <iostream>
#include <string.h>
#include <cmath>

 
 using namespace std;
int main()
{
	int d,n,k;
	 int counter =0;
	 int sum=1;
cin >>n;
cin>>k;
 if (n<=k)
 {cout <<1;
 }
 else 
 {        for (int i=k;i>1;i--)
         {    if(n>sum)
                 {
		        sum+=(i-1);
                counter++;
             	d=i-1;
		         }
		 
		 
		      else if(n==sum)
		          {
		        	cout <<counter;
		           	return 0;
		         } 
			else 
		       {
			    sum-=d;
		        counter-=1;
		    for (int y=2;y<k;y++)
		       {
		      	if(n>sum)
               {
		   sum=(y-1) +sum ;
           counter++;
         
		 }else if(i== sum)
		 {
		 	cout <<counter;
		 	return 0;
		 }
		 else
		 {
		 	cout <<-1;
		 	return 0;
		 }
		 }
		 
		 }

	

	
}

 }

	
}
