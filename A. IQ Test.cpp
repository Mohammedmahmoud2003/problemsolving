#include <iostream>
using namespace std;
int main()
{
	char arr[4][4];
 for (int i =0;i<4;i++)
 { 
 for (int x =0;x<4;x++)
    {
	cin >>arr[i][x];
    }
 }
  for (int r =0;r<4;r++)
 { 
 
 for (int s =0;s<3;s++)
    {  
    	if (arr[r][s]=='#'&&arr[r][s+1]=='#'&&arr[r+1][s]=='#'
		||arr[r][s]=='#'&&arr[r][s+1]=='#'&&arr[r+1][s+1]=='#'
		||arr[r][s]=='#'&&arr[r+1][s]=='#'&&arr[r+1][s+1]=='#'
		||arr[r][s+1]=='#'&&arr[r+1][s]=='#'&&arr[r+1][s+1]=='#'
		||arr[r][s]=='#'&&arr[r+1][s+1]=='#'&&arr[r+1][s]=='#'&&arr[r][s+1]=='#'
		||arr[r][s]=='.'&&arr[r][s+1]=='.'&&arr[r+1][s]=='.'
		||arr[r][s+1]=='.'&&arr[r][s]=='.'&&arr[r+1][s+1]=='.'
		||arr[r][s]=='.'&&arr[r+1][s]=='.'&&arr[r+1][s+1]=='.'
		||arr[r][s+1]=='.'&&arr[r+1][s]=='.'&&arr[r+1][s+1]=='.'
		||arr[r][s]=='.'&&arr[r+1][s+1]=='.'&&arr[r+1][s]=='.'&&arr[r][s+1]=='.')
    	
    	
    	{cout << "YES";
    	return 0;
		}
		else
	
    }
 }
 cout <<"NO";
}
