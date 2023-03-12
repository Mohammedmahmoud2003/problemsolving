#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x=1,y,s,d;
	int r1,r2,c1,c2,d1,d2;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
for (;x<10;x++)
{
	if (x<r1)
	{
		y=r1-x;
		if (y<c2&&y!=x)
		{
			s=c2-y;
			if(r2>s&&s!=y&&s!=x)
			{
			d=r2-s;
			if (d+x==c1&&d1==s+x && d2==y+d&&s!=d&&d!=x&&d!=x&&y<10&&d<10&&s<10&&d!=y &&y>0&&d>0&&s>0)
			{
				cout <<x<<" "<<y<<endl<<d<<" "<<s;
				return 0;
			}
			}
			
		}
	}
	
}
cout<<"-1";
	
}
