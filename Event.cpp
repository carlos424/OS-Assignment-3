#include "Event.h"

Event::Event()
{	
	TIME = 0;
	TYPE = 0;
	ID = 0;
}

Event::Event(int time, int type, int id)
{
	TIME = time;
	TYPE = type;
	ID = id;
}


int Event::getTime()
{
	return TIME;
}


int Event::getType()
{
	return TYPE;
}


int Event::getId()
{
	return ID;
}


void Event::setTime(int time)
{
	TIME = time;
}


void Event::setType(int type)
{
	TYPE = type;
}


void Event::setId(int id)
{
	ID = id;
}

