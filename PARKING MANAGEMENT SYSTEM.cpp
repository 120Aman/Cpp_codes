                                                                    //PARKING MANAGEMENT SYSTEM
#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class parking
{
	int amount=0,count=0;
	int y,a;
	public:
		   void rickshaw();
		   void car();
		   void bus();
		   void show_record();
		   void delete_record();
};
void parking :: rickshaw()
{
		if(count<50)
    	{
	cout<<"Enter no. of rickshaws to be parked \n";
	cin>>a;
	
    	amount=amount+(100*a);
    	count=count + a;
		}
		else
		{
			cout<<"Parking is Full \n";
		}
	
}
void parking :: car()
{	if(count<50)
    	{
	cout<<"Enter no. of cars to be parked \n";
	cin>>a;
	
    	amount=amount+(200*a);
    	count=count + a;
		}
		else
		{
			cout<<"Parking is Full \n";
		}
	
}
void parking :: bus()
{
		if(count<50)
    	{
	cout<<"Enter no. of buses to be parked \n";
	cin>>a;
	
    	amount=amount+(300*a);
    	count=count + a;
		}
		else
		{
			cout<<"Parking is Full \n";
		}
	
}
void parking :: show_record()
{
	 cout<<"Total amount="<<amount<<"\n";
     cout<<"Total vehicles parked="<<count<<"\n";
}
void parking :: delete_record()
{
		amount=0;
    	count=0;
}
int main()
{
	int ch,x;
	parking obj;
	do
	{
	cout<<"Press 1 for Rickshaw, RATE=100 \n";
	cout<<"Press 2 for Car, RATE=200 \n";
	cout<<"Press 3 for Bus, RATE=300 \n";
	cout<<"Press 4 to show the Record \n";
	cout<<"Press 5 to delete the Record \n";
	cout<<"Press 6 to EXIT  \n";
    cin>>ch;
     switch(ch)
	 {
	 	case 1:
	 	obj.rickshaw();
	 	break;
	 	case 2:
	 	obj.car();
	 	break;
	 	case 3:
	 	obj.bus();
	 	break;
	 	case 4:
	 	obj.show_record();
	 	break;
	 	case 5:
	 	obj.delete_record();
	 	break;
	 	case 6:
	 		if(ch==5)
	 		{
	 			exit(1);
			 }
	default:
		cout<<"No options matched, Try Again \n";
	}
	cout<<" \n To select options again, Press:Y \n";
	cout<<"To exit, Press:N \n";
	x=getch();
	if(x=='n'|| x=='N')
	{
		exit(0);
	
	}
	}while(x=='y'|| x=='Y');
	 
	getch();
	return 0;
  
}
