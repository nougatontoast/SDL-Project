#include "Notifier.h"

Notifier::Notifier() : observers{}
{
}

Notifier::~Notifier()
{
}

void Notifier::AddObserver(Observer* observer)
{
	observers.emplace(observer);
}

void Notifier::RemoveObserver(Observer* observer)
{
	auto observerToErase = observers.find(observer);
	if(observerToErase != observers.end())
	{
		observers.erase(observerToErase);
	}
}

void Notifier::Notify(void)
{
	for(auto& observer : observers)
	{
		observer -> OnNotify();
	}
}



