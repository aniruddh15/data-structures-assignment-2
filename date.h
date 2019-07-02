//Author: Aniruddh Kathiriya
//Assignment: 2
//Reference: http://stackoverflow.com/questions/3513173/converting-ostream-into-standard-string https://en.wikipedia.org/wiki/Leap_year
#ifndef DATE_H
#define DATE_H
#include <string>

class date{
	private:
	int month;
	int day;
	int year;
	public:
	date(int month=1,int date=1, int year=1);
	//Pre Condition: require month, date, year; year should be 4 digit length, month and date should match up calander
	//Post Condition:construct date object
	
	void nextDay();
	//Post Condition: increment date by one
	
	int get_month() const;
	//Post Condition: return month
	
	int get_day() const;
	//Post Condition: return day
	
	int get_year() const;
	//Post Condition: return year
	
	private:
	bool checkMonthwithDate(int y=0,int m=0, int d=0) const;
	//Post Condition: return trueprovided year, month, and date are correct, else false
	
	bool is_leap_year(int y=0) const;
	//Post Condition: return true if year provided is leap year, else false
	
};//End Class Date

	std::string getDateinNumber(const date& d1);
	//Post Condition: return date in MM/DD/YYYY format

	std::string getDateinWords(const date& d1);
	//Post Condition: return date in MonthName Day, Year

#endif
