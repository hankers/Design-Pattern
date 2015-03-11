#ifndef _SUBJECT_H
#define _SUBJECT_H

#include <iostream>
#include <cstdio>
#include <cstring>
#include <list>
#include "Observer.h"

using namespace std;

class Subject {
	public:
		list<Observer*> observers;
		
		virtual bool registerObserver(Observer *o) = 0;
		virtual bool removeObserver(Observer *o) = 0;
		virtual void notifyObserver() = 0;
};

class WeatherData : public Subject {
	public:
		bool registerObserver(Observer *o);
		bool removeObserver(Observer *o);
		void notifyObserver();
		void MeasurementsChanged();
		void setMeasurements(float temp, float humidity, float pressure);

	private:
		float temperature, humidity, pressure;
};

#endif
