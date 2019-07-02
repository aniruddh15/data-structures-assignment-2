//Author: Aniruddh Kathiriya
//Assignment: 2
#include "date.h"
#include <iostream>
#include <cassert>
using namespace std;
int main(){
	/*int y=2012;
	int c=0;
	
	
	if(y % 4 !=0){
		c=1;
	}else if(y%100!=0){
		c=0;
	}else if(y%400!=0){
		c=1;
	}else{
		c=0;
	}
	*/
	date d1(02,29,2020); //leap date
	date d2(02,22,2015);
	assert(d1.get_month()==2);
	assert(d1.get_day()==29);
	assert(d1.get_year()==2020);
	
	d2.nextDay();
	
	assert(d2.get_month()==2);
	assert(d2.get_day()==23);
	assert(d2.get_year()==2015);
	
	d1.nextDay();
	cout<<d1.get_month()<<" "<<d1.get_day()<<endl;
	assert(d1.get_month()==3);
	assert(d1.get_day()==1);
	assert(d1.get_year()==2020);
	
	date d3(12,31,2015);
	d3.nextDay();
	assert(d3.get_month()==1);
	assert(d3.get_day()==1);
	assert(d3.get_year()==2016);
	date d4(12,31,2015);
	
	//cout<<getDateinNumber(d1)<<endl;
	cout<<getDateinNumber(d1)<<endl;
	cout<<getDateinNumber(d2)<<endl;
	cout<<getDateinNumber(d3)<<endl;
	cout<<getDateinNumber(d4)<<endl;
	
	cout<<getDateinWords(d1)<<endl;
	cout<<getDateinWords(d2)<<endl;
	cout<<getDateinWords(d3)<<endl;
	cout<<getDateinWords(d4)<<endl;
	
	
	cout<<"End of Script"<<endl;
	return 0;
	
};