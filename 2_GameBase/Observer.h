#ifndef OBSERVER_H
#define OBSERVER_H

class Observer
{
public:
	Observer();
	
	friend bool operator==(const Observer& lhs, const Observer& rhs);
	
	virtual void OnNotify(unsigned short flag) {};
};

#endif // OBSERVER_H
