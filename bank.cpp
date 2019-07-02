//Assignment 2(a)
//Author: Aniruddh Kathiriya
#include "bank.h"
#include <iostream>
#include<cassert>



bank::bank(double rbal, double rinte){
	bal=rbal;
	interest=rinte;
		
}
double bank::get_bal() const{
	return bal;
}
double bank::get_interest() const{
	return interest;
}
void bank::change_bal_w(double mod){
	assert(mod>0);
	bal=bal-mod;
}
void bank::change_bal_d(double mod){
	assert(mod>0);
	bal=bal+mod;
}
void bank::change_interest(double mod){
	assert(mod>0);
	interest=mod;
}
void bank::add_interest(double time){
	assert(time>0);
	double totInterest=bal*(interest/100)*time;
	bal=bal+totInterest;
}