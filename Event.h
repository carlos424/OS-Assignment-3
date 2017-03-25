//CS433 Assignment 3
//Carlos Ferrer, Brandon Herbert
//
//
//Purpose
//Create a Event Class
#ifndef Event_H
#define Event_H


class Event{
private:
	int TIME;
	int TYPE;
	int ID;
public:
	Event();
	Event(int time, int type, int id);
	int getTime();
	int getType();
	int getId();
	void setTime(int time);
	void setType(int type);
	void setId(int id);
	
};

#endif

