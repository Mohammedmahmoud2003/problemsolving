#include <bits/stdc++.h>
using namespace std;
class mohammed{
	private:
		char name[15];
		int tall;
		int wight;
		char color[10];
    public:
    	void setname(char arr[])
    	{
    		strcpy(name,arr);
		}
		void setcolor(char color2[]){
			strcpy(color,color2);
		}
		void setwigth(int wight2){
			wight=wight2;
		}
		
		void settall(int tall2){
			tall=tall2;
		}
	
		char* getname (){
			return name;
			
		}
		char* getcolor (){
			return color  ;
			
		}
		int gettall()
		{
			return tall;
		}
		int getwigh()
		{
			return wight;
		}
		void print()
		{
			cout <<"name"<<name<<endl;
			cout <<"color "<<color<<endl;
			cout <<"tall"<<wight<<endl;
			cout <<"wigth"<<tall<<endl;
		}
		
};
int main(){
mohammed x;
char t[10];
cin>>t;
x.setname(t);
x.getname();
return 0;	
}
