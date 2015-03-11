#include "Subject.h"

bool WeatherData::registerObserver(Observer *o) {
	size_t size = observers.size();
	list<Observer*>::iterator it;	
	for (it = observers.begin(); it != observers.end(); it ++) {
		Observer *b = *it;
		if (b->id == o->id) {
			cout << "The Observer had registered!" << endl;
			return true;
		}
	}
	
	observers.push_back(o);
	
	return true;
}

bool WeatherData::removeObserver(Observer *o) {
	size_t size = observers.size();
	bool exist = false;

	list<Observer*>::iterator it;	
	for (it = observers.begin(); it != observers.end(); it ++) {
		Observer *b = *it;
		if (b->id == o->id) {
			exist = true;
			observers.remove(o);
			return true;
		}
	}
	if (!exist) {
		cout << "There is not the Observer in observers!" << endl;
		return true;
	}
}

void WeatherData::notifyObserver() {
	size_t size = observers.size();

	list<Observer*>::iterator it;	
	for (it = observers.begin(); it != observers.end(); it ++) {
		Observer *b = *it;
		b->update(temperature, humidity, pressure);
	}

}

void WeatherData::MeasurementsChanged() {
	notifyObserver();
}

void WeatherData::setMeasurements(float temp, float humidity, float pressure) {
	this->temperature = temp;
	this->humidity = humidity;
	this->pressure = pressure;

	MeasurementsChanged();
}
