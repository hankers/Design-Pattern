#include "CurrentConditionDisplay.h"

int main()
{	
	//WeatherData *weatherData = new WeatherData();
	WeatherData weatherData;
	CurrentConditionDisplay currentDisplay1(weatherData, "D1");
	CurrentConditionDisplay currentDisplay2(weatherData, "D2");
	CurrentConditionDisplay currentDisplay3(weatherData, "D3");
	
	weatherData.setMeasurements(10, 10, 10);
	//weatherData->setMeasurements(20, 10, 10);
	//weatherData->setMeasurements(0, 10, 10);

	return 0;
}
