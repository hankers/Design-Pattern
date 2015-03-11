#include "Duck.h"

MallardDuck::MallardDuck() {
	flybehavior = new FlyWithWings();
	quackbehavior = new Quack(); 
}

void MallardDuck::display() {
	cout << "It's a MallarDuck" << endl;
}

