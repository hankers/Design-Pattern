#include <iostream>
#include <cstdio>
#include <cstring>
#include "Pizza.h"
#include "PizzaStore.h"

using namespace std;

int main()
{
	PizzaStore *nyStore = new NYPizzaStore();
	PizzaStore *chicagoStore = new ChicagoPizzaStore();

	Pizza *pizza = nyStore->orderPizza("cheese");
	if (pizza != NULL) {
		cout << pizza->getName() << endl;
	}

	pizza = chicagoStore->orderPizza("cheese");
	if (pizza != NULL) {
		cout << pizza->getName() << endl;
	}

	return 0;	
}

