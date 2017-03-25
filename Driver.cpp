//CS433 Assignment 3
//Carlos Ferrer, Brandon Herbert
//
//
//Purpose
//Create a method of testing Scheduling



#include "Event.h"
#include "Queue.h"

using namespace std;

int main()
{
	int currentTime = 0;
	int quitTime = 300;
	
	Event* event_table[20];
	Event* temp;

	

	// creating a new table to add into the queue
	for (int i =0 ; i < 20 ; i++ )
	{
		event_table[i] = new Event();
		event_table[i] -> setId(i);
		event_table[i] -> setTime(i);
		event_table[i] -> setType (0);

	}
	
	Queue *Q1 = new Queue();
	Q1->insertProc(event_table[5]);
	Q1->insertProc(event_table[1]);
	Q1->insertProc(event_table[8]);
	Q1->insertProc(event_table[11]);

	Q1->display();
	

}