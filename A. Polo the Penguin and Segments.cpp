#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s,k;
	cin >>s>>k;
	int number=s*2;

	int counter=0;
	int arr[number];
	for (int i =0;i<number;i++)
    {
	cin >>arr[i];


    }
sort(arr,arr+number);
 	for (int g =1;g<9;g++)
    {	if ((arr[number-1]-(arr[0]-1))%k==0)
         {
         
         	cout<<counter;
         return 0;
         
	
         }else if(arr[0]==0){
		 arr[0]-=1;
		 counter++;
	
		
		 }else
		 {
		 	arr[number-1] +=1;
		 	counter++;
		 
			 }	
    }
    
}
