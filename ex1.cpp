#include <iostream>
#include "ex1.h"
using namespace std;

void time:: sethour(int hourM)
{
	hour=hourM;
}
void time:: setminute(int minuteM)
{
	minute=minuteM;
}
void time:: setsecound(int secoundM)
{
	secound=secoundM;
}
int time:: gethour()
{
	return hour;
}

int time:: getminute()
{
	return minute;
}
int time:: getsecound()
{
	return secound;
}




void time:: fixtime()
{
	
	minute+=secound/60;
	secound=secound%60;
	hour+=minute/60;
	minute=minute%60;


}

void printtime(time toprint)
{
	cout<<toprint.gethour()<<"."<<toprint.getminute()<<"."<<toprint.getsecound()<<endl;
}

void spacprintTime(time Stoprint)
{
	if(Stoprint.gethour()<10)
	cout<<"0";
	cout<<Stoprint.gethour()<<".";
    if(Stoprint.getminute()<10)
	cout<<"0";
	cout<<Stoprint.getminute()<<".";
	if(Stoprint.getsecound()<10)
		cout<<"0";
	cout<<Stoprint.getsecound()<<endl;
}