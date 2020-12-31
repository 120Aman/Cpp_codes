                                                                            //CHATBOX
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
  char inp;
  char name[100];
  string gtkey;
  int age;
  cout<<"\t\t WELCOME TO CHATBOX \n";
  cout<<"To continue the program, Press 'Y' & To end Press 'Any letter except y'";
  cout<<"\n ---> ";	
  cin>>inp;
  if(inp=='y' || inp=='Y')
  {
  	cout<<"\n welcome....";
  	Sleep(500);
  }
  else
  {
  	cout<<"\n Thanks for coming";
  	return 0;
  }
   system("cls");
   if(gtkey!="BYE")
   {
   	cout<<"HELLO USER \n";
   	cin>>gtkey;
   	cout<<" What is your Name ? \n";
   	cin.ignore();
   	cin.getline(name,100);
   	cout<<name<<"--> What is your Age ? \n";
   	cin>>age;
   	if(age>0 && age<100)
   	{
   		if(age>0 && age<=10)
   		{
   			cout<<name<<"\t YOU ARE A KID";
   			cout<<"\n Thanks for coming";
   			exit(1);
		   }
		   if(age>10 && age<=18)
   		{
   			cout<<name<<"\t YOU ARE A TEENAGER";
   			cout<<"\n Thanks for coming";
   			exit(1);
		   }
		   if(age>18 && age<=30)
   		{
   			cout<<name<<" \t YOU ARE AN ADULT";
   			cout<<"\n Thanks for coming";
   			exit(1);
		   }
		   if(age>30 && age<=50)
   		{
   			cout<<name<<"\t YOU ARE A MAN";
   			cout<<"\n Thanks for coming";
   			exit(1);
		   }
		   if(age>50)
   		{
   			cout<<name<<"\t YOU ARE AN OLD MAN";
   			cout<<"\n Thanks for coming";
   			exit(1);
		   }
		   
    }
    else
    {
    	cout<<" You have entered wrong Age";
    	exit(1);
	}
   }
	return 0;
}
