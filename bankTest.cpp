//Assignment 2(a)
//Author: Aniruddh Kathiriya
#include <cassert>
#include <iostream>
#include "bank.h"
using namespace std;
int main()
{
	bank acct1(5.993,0.2);
	bank acct2(0,2);
	
	assert(acct1.get_bal()==5.993);
	assert(acct1.get_interest()==0.2);
	assert(acct2.get_bal()==0);
	assert(acct2.get_interest()==2);
	
	acct1.change_bal_w(1);
	assert(acct1.get_bal()==4.993);
	
	acct1.change_bal_d(2);
	assert(acct1.get_bal()==6.993);
	
	acct1.change_interest(100);
	assert(acct1.get_interest()==100);
	
	acct1.add_interest(1);
	assert(acct1.get_bal()==13.986);
	
	bank acct3(100,100);
	acct3.add_interest(1);
	assert(acct3.get_bal()==200);
	
	
	
	
	
	cout<<"it works"<<endl;
	return 0;
};