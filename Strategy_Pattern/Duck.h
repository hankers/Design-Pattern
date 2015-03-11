#ifndef _DUCK_H_
#define _DUCK_H_

#include <iostream>
#include <cstdio>
#include <string>
#include "QuackBehavior.h"
#include "FlyBehavior.h"

using namespace std;

class Duck 
{
	public:
		FlyBehavior *flybehavior;
		QuackBehavior *quackbehavior;
		
//		Duck() {};
//		~Duck() {};
		virtual void display() = 0;	
		void performFly() { flybehavior->fly();}
		void performQuack() { quackbehavior->quack();}
};


class MallardDuck : public Duck
{
	public:
		MallardDuck();
		~MallardDuck() {};
		void display();
}; 

#endif
