#ifndef NOTIFIER_H
#define NOTIFIER_H
#include <set>
#include "Observer.h"

class Notifier
{
public:
	Notifier();
	~Notifier();
	
	void AddObserver(Observer* observer);
	void RemoveObserver(Observer* observer);
	void Notify(void);
	
private:
	std::set <Observer*> observers;

};

#endif // NOTIFIER_H
