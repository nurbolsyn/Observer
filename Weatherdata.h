#pragma once

#include <iostream>
#include <list>
#include "Subject.h"
#include "Observer.h"

class WeatherData : public Subject {
private:
	std::list<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;
public:
	WeatherData();
	void registerObserver(Observer* o);
	void removeObserver(Observer* o);
	void notifyObservers();

	void measurementsChanged();
	void setMeasurements(float, float, float);
};