#include<string>
#include<iostream>
using namespace std;

class Date{
	static string monthNames[13];
	int day;
	int month;
	int year;
public:
	Date();
	Date(int,int,int);
	friend ostream &operator<<(ostream & output,const Date&);
	friend istream &operator>>(istream & input, Date&);
	bool operator==(const Date&);
	int operator+(int );
	void operator=(int);
	Date&  operator--();
	Date operator--(int a);
	int & operator[](int);
	~Date();
};
ostream &operator<<(ostream & output,const Date&d)//extraction
{
	/*output<<"date:"<<d.day<<"-"<<d.month<<"-"<<d.year<<endl;
	return output;*/
	if(d.month==1)
		output<<monthNames[1];
	else if(d.month==2)
		output<<monthNames[2];
	else if(d.month==3)
		output<<monthNames[3];
	else if (d.month==4)
		output<<monthNames[4];
	else if(d.month==5)
		output<<monthNames[5];
	else if(d.month==6)
		output<<monthNames[6];
	else if (d.month==7)
		output<<monthNames[7];
	if(d.month==8)
		output<<monthNames[8];
	else if(d.month==9)
		output<<monthNames[9];
	else if(d.month==10)
		output<<monthNames[10];
	else if (d.month==11)
		output<<monthNames[11];
	else
		output<<monthNames[12];
	output<<d.day<<","<<d.year;
	return output;

}
istream &operator>>(istream & input, Date&d)
{
	input>>d.day>>d.month>>d.year;
	return input;
}
static string monthNames[13] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
