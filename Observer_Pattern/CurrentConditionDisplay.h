#ifndef _CURRENTCONDITIONDISPLAY_H
#define _CURRENTCONDITIONDISPLAY_H

#include <iostream>
#include <cstdio>
#include <cstring>
#include "Observer.h"
#include "Subject.h"

class CurrentConditionDisplay : public Observer, public DisplayElement {
	public:
		CurrentConditionDisplay(Subject &weatherData, std::string ID);
		~CurrentConditionDisplay() {};
		void update(float temp, float humidity, float pressure);
		void display();

	private:
		float temprature, humidity, pressure;
};
#endif
