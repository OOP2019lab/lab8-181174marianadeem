#include"string.h"
#include <iostream>
#include "Date.h"
using namespace std;

Date::Date()//default constructor sets the value to 1st jan,2000
{
	day=1;
	month=1;
	year=2000;
}

Date::Date(int d,int m,int y)//parameterised constructor
{
	if(d<=30&&d>=1&&m<=12&&m>=1&&y<9999&&y>0)
	{
		day=d;
		month=m;
		year=y;
	}
	else
	{
		day=1;
		month=1;
		year=2000;
	}
}

//ostream &operator<<(ostream & output,const Date&d)//extraction operator
//{
//	output<<"date:"<<d.day<<"-"<<d.month<<"-"<<d.year<<endl;
//	return output;
//}

istream &operator>>(istream & input, Date&d)//insertion operator
{
	input>>d.day>>d.month>>d.year;
	return input;
}

//bool Date:: const &operator==(const Date)
//{
//
//}
bool Date::operator==(const Date&d)//comparision operator
{
	if(d.day==day&&d.month==month&&d.year==year)
		return true;
	else
		return false;
}

int Date::operator+(int d)//addition operator
{
	day=day+d;
	return day;
}

//int Date::operator=(int d)
//{
//
//}

//Date:: Date operator=(Date d)
//{
//	day=d.day;
//	month=d.month;
//	year=d.year;
//}

void Date::operator=(int d)//assignment operator
{
	day=day+d;
}

//post decrement
Date&  Date::operator--()
{
	if(day==1)
	{
		day==30;
		month--;
	}
	else if(month==1)
	{
		day=30;
		month=12;
		year--;
	}
	else
		day--;
	return *this;
}

Date Date::operator--(int a)//pre decrement
{
	Date temp(*this);
	operator--();
	return temp;
}

int &Date::operator[](int i)//subscript operator
{
	if(i==0)
	{
		return day;
	}
	else if(i==1)
	{
		return month;
	}
	else if(i==2)
	{
		return year;
	}
	else
	{
		cout<<"enter valid entry"<<endl;
	}
	return day;
}
Date::~Date()//destructor
{
	day=0;
	month=0;
	year=0;
}


