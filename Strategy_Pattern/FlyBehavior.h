#ifndef _FLYBEHAVIOR_H
#define _FLYBEHAVIOR_H

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class FlyBehavior
{
	public:
//		FlyBehavior() {};
//		~FlyBehavior() {};
		virtual void fly() = 0;
};

class FlyWithWings : public FlyBehavior
{
	public:
//		FlyWithWings() {};
//		~FlyWithWings() {};
		void fly();
};

#endif
