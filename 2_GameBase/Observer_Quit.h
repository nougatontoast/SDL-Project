#ifndef OBSERVER_QUIT_H
#define OBSERVER_QUIT_H
#include "Observer.h"

class Observer_Quit : public Observer
{
public:
	Observer_Quit(bool& triggerQuit);
	
	virtual void OnNotify(void) override;

private:
	bool& triggerQuit;
};

#endif // OBSERVER_QUIT_H
