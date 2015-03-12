#ifndef _PIZZA_H
#define _PIZZA_H

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

class Pizza {
	public:
		string name;
		void prepare() { cout << "prepare..." << endl;};		
		void bake() { cout << "bake..." << endl;};		
		void cut() { cout << "prepare..." << endl;};		
		void box() { cout << "box" << endl;};
		string getName() { return name;};
};

class NYStyleCheesePizza : public Pizza {
	public:
		NYStyleCheesePizza() { name = "NYStyleCheesePizza";};		
};

class ChicagoStyleCheesePizza : public Pizza {
	public:
		ChicagoStyleCheesePizza() { name = "ChicagoStyleCheesePizza";};		
};

#endif
