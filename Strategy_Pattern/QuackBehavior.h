#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class QuackBehavior
{
	public:
//		QuackBehavior() {};
//		~QuackBehavior() {};
		virtual void quack() = 0;
};

class Quack : public QuackBehavior
{
	public:
//		Quack() {};
//		~Quack() {};
		void quack();
};
