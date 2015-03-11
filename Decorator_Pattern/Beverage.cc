#include "Beverage.h"

Mocha::Mocha(Beverage *beverages) {
	beverage = beverages;
}

string Mocha::getDescription() {
	return beverage->getDescription() + ", Mocha";
}

double Mocha::cost() {
	return .20 + beverage->cost();
}

Whip::Whip(Beverage *beverages) {
	beverage = beverages;
}

string Whip::getDescription() {
	return beverage->getDescription() + ", Whip";
}

double Whip::cost() {
	return .30 + beverage->cost();
}
