#ifndef _PIZZA_STORE_H
#define _PIZZA_STORE_H

#include <iostream>
#include <cstdio>
#include <cstring>
#include "Pizza.h"

using namespace std;

class PizzaStore {
	public:
		virtual Pizza* createPizza(string type) {};
		//Pizza* createPizza(string type) {};
		Pizza* orderPizza(string type);
};

class NYPizzaStore : public PizzaStore {
	public:
		Pizza* createPizza(string type);
};

class ChicagoPizzaStore : public PizzaStore {
	public:
		Pizza* createPizza(string type);
};

#endif
