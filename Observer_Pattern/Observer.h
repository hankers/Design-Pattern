#ifndef _OBSERVER_H
#define _OBSERVER_H

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

class Observer {
	public:
		std::string id;
		virtual void update(float temp, float humidity, float pressure) = 0;
		//void update(float temp, float humidity, float pressure) {};
};

class DisplayElement {
	public:
		virtual void display() = 0;
		//virtual void display() {};
};
/*
class CurrentConditionDisplay : public Observer, DisplayElement {
	public:
		CurrentConditionDisplay(Subject *weatherData);
		~CurrentConditionDisplay();
		void update(float temp, float humidity, float pressure);
		void display();

	private:
		float temprature, humidity, pressure;
};
*/
#endif
