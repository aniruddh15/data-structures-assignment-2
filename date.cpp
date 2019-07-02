//Author: Aniruddh Kathiriya
//Assignment: 2
#include "date.h"
#include <iostream>
#include <cassert>
#include <sstream>


date::date(int m, int d, int y){
	
	assert(m<=12 && m>0);
	assert(d<=31 && d>0);
	int length=0;
	int check=y;
	while(check!=0){
		check=check/10;
		length++;
	}
	assert(length==4);
	assert(checkMonthwithDate(y,m,d));
	month=m;
	day=d;
	year=y;
	
}
int date::get_month() const{
	return month;
}
int date::get_day() const{
	return day;
}
int date::get_year() const{
	return year;
}

bool date::is_leap_year(int y) const{
	
	if(y % 4 !=0){
		return false;
	}else if(y%100!=0){
		return true;
	}else if(y%400!=0){
		return false;
	}else{
		return true;
	}
	
}
void date::nextDay(){
	if(checkMonthwithDate(year,month,day+1)){
		day=day+1;
	}else{
		if(month==12 && day==31){
			year=year+1;
			month=1;
			day=1;
		}else{
			month=month+1;
			day=1;
		}
	}
	
}
bool date::checkMonthwithDate(int y,int m,int d) const{
	if(d>31){
			return false;
		}
	if(m==2 && d==29){
		if(!(is_leap_year(y))){
			return false;
		}
	}else if((m==2 && d>28) || (m==4 && d>30) || (m==6 && d>30) || (m==9 && d>30) || (m==11 && d>30)){
			return false;
	}
		return true;
	
}

std::string getDateinNumber(const date& d1){
	std::ostringstream stream;
	int y=d1.get_year();
	int m=d1.get_month();
	int d=d1.get_day();
	if(m<10){
		stream<<0;
	}
	stream<<m<<"/";
	if(d<10){
		stream<<0;
	}
	stream<<d<<"/"<<y;


	//std::string new_string = ""+d+y+m;
	return stream.str();
	
}

std::string getDateinWords(const date& d1){
	std::ostringstream stream;
	int y=d1.get_year();
	int m=d1.get_month();
	int d=d1.get_day();
	
	static std::string month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	stream<<month[m-1]<<" ";
	if(d<10){
		stream<<0;
	}
	stream<<d<<", "<<y;
	
	return stream.str();
}
