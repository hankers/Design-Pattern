#include "CurrentConditionDisplay.h"

CurrentConditionDisplay::CurrentConditionDisplay(Subject &weatherData, std::string ID) {
	id = ID;
	//weatherData->registerObserver(this);
	weatherData.registerObserver(this);
}

void CurrentConditionDisplay::update(float temp, float humidity, float pressure) {
	this->temprature = temp;
	this->humidity = humidity;
	this->pressure = pressure;
	display();
}

void CurrentConditionDisplay::display() {
	cout << "temprature is " << this->temprature << endl;
	cout << "humidity is " << this->humidity << endl;
	cout << "pressure is " << this->pressure << endl;
}
