//Assignment 2(a)
//Author: Aniruddh Kathiriya

#ifndef BANK_H
#define BANK_H


class bank{
	
	public:
		bank(double rbal=0,double rinte=0);
		//Post Condition: Bank account is created with balance and interest rate in percentage, defaulted to 0
		
		double get_bal() const;
		//Post Condition: return current account balance
		
		double get_interest() const;
		//Post Condition: return current account interest
		
		void change_bal_w(double mod);
		//Pre condition:withdraw money should be less than balance
		//Post Condition:withdraw money from balance
		
		void change_bal_d(double mod);
		//Post Condition: Add money to balance
		
		void change_interest(double mod);
		//Post Condition: change interest rate
		
		void add_interest(double time);
		//Post Condition: add interest for specified time in years to the account balance
	
	
	private:
		double bal;
		double interest;
	
	
	
};
#endif