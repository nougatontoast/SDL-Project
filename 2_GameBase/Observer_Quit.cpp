#include "Observer_Quit.h"

Observer_Quit::Observer_Quit(bool& triggerQuit) : triggerQuit {triggerQuit}
{
}

void Observer_Quit::OnNotify(void)
{
	triggerQuit = true;
}

