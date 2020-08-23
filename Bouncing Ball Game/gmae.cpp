#include<iostream>
#include"myconsole.cpp"
#include"mygraphics.h"
#include<windows.h>
#include<cstdlib>
#include"windows.h"

using namespace std;

int main()
{
	ClearScreen();
		system("color 8e");
	for(int i=5;i<=15;i++)
	{
		for(int j=5;j<=15;j++)
		{
			if(j==5||j==15||i==5||(i==15&&j>=10)||(j==10&&i>=10))
			{
				PlaceCursor(i,j);
				cout<<"?";
			}
			
		}
	}
	
	for(int i=17;i<=27;i++)
	{
		for(int j=5;j<=15;j++)
		{
			if(j==5||j==10||i==17||i==27)
			{
				PlaceCursor(i,j);
				cout<<"?";
			}
			
		}
	}
	
	for(int i=29;i<=39;i++)
	{
		for(int j=5;j<=15;j++)
		{
			if(i==29||i==39||(i==j+24&&j<=10)||(i+j==44&&j<=10))
			{
				PlaceCursor(i,j);
				cout<<"?";
			}
			
		}
	}
	for(int i=41;i<=51;i++)
	{
		for(int j=5;j<=15;j++)
		{
			if(j==5||j==10||j==15||i==41)
			{
				PlaceCursor(i,j);
				cout<<"?";
			}
			
		}
	}
		
	for(int i=0;i<70;i++)
	{
		for(int j=0;j<25;j++)
		{
			if(i==0||j==0||j==24||i==69)
			{
				PlaceCursor(i,j);
				cout<<"#";
			}
		}
	}
	int a=0;
	int x=24;
	int y=23;
	int x1=25;
	int y1=2;
	PlaceCursor(x1,y1);
	cout<<"0";
	
	int key=0;
	PlaceCursor(x,y);
	cout<<"******";
	int check=0;
	bool cot=false;
	for(int i=0;check==0;i++)
	{   
	    if(y1<=1)
	    {
	    	cot=false;
		}
		else if(y1>=23)
		{
			cot=true;
			a--;
		}
		if(y>25)
		{
			y=y%25;
			y=y+20;
		}
	    int key1=0;
	   // bool cot=false;
	     key = CheckKeyPressed(500);
		if(key==RIGHTKEY )
		{   
			for(int j=0;key1==0;j++)
			{
	            key1 = CheckKeyPressed(200);
				PlaceCursor(x,y);
				cout<<"      ";
				PlaceCursor(x1,y1);
				cout<<" ";
				if((x1==x||x1==x+1||x1==x+2||x1==x-1||x==x-2)&&(y1==y))
				{
					cot=true;
					a++;
					if(x1==x)
					{
						x1=x1+1;
					}
					else if(x1==x+1)
					{
						x1=x1+2;
					}
					else if(x1==x+2)
					{
						x1=x1+3;
					}
					else if(x1==x+4)
					{
						x1=x1+4;
					}
					else{
						x1=x+5;
					}
				}
				if(cot==true)
				{
					y1--;
				}
				else{
					y1++;
				}
				//y1=y1%32;
				//x=x%65+1;
				x++;
				PlaceCursor(x1,y1);
				cout<<"@";
				PlaceCursor(x,y);
				cout<<"****";
			}
		}
	    else if(key==LEFTKEY)
		{  
			for(int j=0;key1==0;j++)
			{   key1 = CheckKeyPressed(200);
				PlaceCursor(x,y);
	            cout<<"    ";
	            	PlaceCursor(x1,y1);
				cout<<" ";
				if((x1==x||x1==x+1||x1==x+2||x1==x-1||x1==x-2)&&(y==y1))
				{
					cot=true;
					a++;
					if(x1==x)
					{
						x1=x1-1;
					}
					else if(x1==x+1)
					{
						x1=x1-2;
					}
					else if(x1==x+2)
					{
						x1=x1-3;
					}
					else if(x1==x+4)
					{
						x1=x1-4;
					}
					else{
						x1=x-5;
					}
				}
				if(cot==true)
				{
					y1--;
				}
				else{
					y1++;
				}
	           // y1=y1%30+1;
				//x=x%65+1;
				x--;	
	            PlaceCursor(x1,y1);
				cout<<"@";
         		PlaceCursor(x,y);
				cout<<"****";       
			//	key = CheckKeyPressed(500);
			}
		}
		
	    else if(key==UPKEY )
		{   
			for(int j=0;key1==0;j++)
			{
	            key1 = CheckKeyPressed(200);
				PlaceCursor(x,y);
				cout<<"    ";
			 	PlaceCursor(x1,y1);
				cout<<" ";
				if((x1==x||x1==x+1||x1==x+2||x1==x-1||x1==x-2)&&(y1==y))
				{
					cot=true;
					a++;
					x1--;
				}
				if(cot==true)
				{
					y1--;
				}
				else{
					y1++;
					
				}
				//y1=y1%30+1;
	            //y=y%30+1;
				y--;	
	            PlaceCursor(x1,y1);
				cout<<"@";
				PlaceCursor(x,y);
				cout<<"****";
			//	key = CheckKeyPressed(500);
			}
		}
	    else if(key==DOWNKEY)
		{  
			for(int j=0;key1==0;j++)
			{   
			    key1 = CheckKeyPressed(200);
				PlaceCursor(x,y);
	            cout<<"    ";
	            	PlaceCursor(x1,y1);
				cout<<" ";
				if((x1==x||x1==x+1||x1==x+2||x1==x-1||x1==x-2)&&(y1==y))
				{
					cot=true;
					a++;
					x1=x1-1;
				}
				if(cot==true)
				{
					y1--;
				}
				else{
					y1++;
				}
				 //y1=y1%30+1;
	            //y=y%30+1;
					y++;	
	            PlaceCursor(x1,y1);
				cout<<"@";
	       		PlaceCursor(x,y);
				cout<<"****";
                
			//	key1 = CheckKeyPressed(500);
			}
		}
	  	else if(key==ESCKEY){
			check=1;
			
		}
		PlaceCursor(15,30);
		cout<<"score = "<<"  ";
		PlaceCursor(15,30);
		cout<<"score = "<<a;
		Sleep(120);
	}
}
