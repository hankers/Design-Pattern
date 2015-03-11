#include "Duck.h"

int main()
{
	Duck *mallard = new MallardDuck();
	mallard->performFly();
	mallard->performQuack();	
	return 0;
}
