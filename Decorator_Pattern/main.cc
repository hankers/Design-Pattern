#include "Beverage.h"

int main()
{
	Beverage *beverage = new Espresso();
	cout << beverage->getDescription() << " cost is " << beverage->cost() << endl;
	
	beverage = new Mocha(beverage);
	cout << beverage->getDescription() << " cost is " << beverage->cost() << endl;
		
	beverage = new Whip(beverage);
	cout << beverage->getDescription() << " cost is " << beverage->cost() << endl;
	
	return 0;
}
