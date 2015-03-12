#include "PizzaStore.h"

Pizza* PizzaStore::orderPizza(string type) {
	Pizza *pizza = NULL;
	
	pizza = createPizza(type);
	if (pizza != NULL) {
		pizza->prepare();
		pizza->bake();
		pizza->cut();
		pizza->box();
	}

	return pizza;
}

Pizza* NYPizzaStore::createPizza(string type) {
	Pizza *pizza = NULL;
	
	if (type == "cheese") {
		pizza = new NYStyleCheesePizza();
	}
	return pizza;
}

Pizza* ChicagoPizzaStore::createPizza(string type) {
	Pizza *pizza = NULL;
	
	if (type == "cheese") {
		pizza = new ChicagoStyleCheesePizza();
	}
	return pizza;
}
