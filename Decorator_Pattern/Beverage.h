#ifndef _BEVERAGE_H
#define _BEVERAGE_H

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

class Beverage {
	public:
		Beverage() { description = "Unknown Beverage";};
		virtual string getDescription() { return description;};
		virtual double cost() {};
		
		string description;
};

class Condiment : public Beverage {
	public:
		virtual string getDescription() = 0;
};

class Espresso : public Beverage {
	public:
		Espresso() {description = "Espresso";}
		double cost() {return 1.99;};
};

class Mocha : public Condiment {
	public:
		Mocha(Beverage *beverages);
		string getDescription();
		double cost();
	private:
		Beverage *beverage;
}; 

class Whip : public Condiment {
	public:
		Whip(Beverage *beverages);
		string getDescription();
		double cost();
	private:
		Beverage *beverage;
}; 
#endif
