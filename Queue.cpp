//CS433 Assignment 3
//Carlos Ferrer, Brandon Herbert
//
//
//Purpose
//Create a priority queue

#ifndef Queue_CPP
#define Queue_CPP


#include "Queue.h"



int rear = 0;
int front = -1;
int numberOfProc = 0;

int Queue::size()
{
	return numberOfProc;
}

void Queue::insertProc(Event* newProc)
{
	if(numberOfProc == 20)
	{
		//cout << "Queue Full!" << endl;
	}
	
	else
	{

		//insert it into our data structure
		tree[rear] = newProc;
		rear = (rear + 1 )%20;
		numberOfProc++;
		sort();
		
		
		
	}
	
	return;
	
}

Event* Queue::removeProc()
{
	if (numberOfProc == 0)
	{
		//cout << "Queue Empty!" << endl;
	}
	
	else
	{
		Event* highest = tree[front];
		front = (front+1)%20;		
	
		numberOfProc--;
		return highest;
	}
	

}

void Queue::display()
{
	if (numberOfProc == 0)
	{
		cout << "The Queue is Empty!" << endl;
	}
	else
	{
		cout << "Displaying the Queue" << endl;
	cout << "ID|Time|Type " << endl;

		int x = front;

		for (int i = 0;i<numberOfProc ;i++ )
		{
			cout << tree[x]->getId() << "|" << tree[x]->getTime() << "|" << tree[x]->getType() << endl;
			x = (x+1)%20;
		}
	}

}

void Queue::sort()
{
	for (int i = front;i<numberOfProc ;i++ )
	{
		for (int x = i+1;x<numberOfProc ;x++ )
		{
			if (tree[i]->getTime() > tree[x]->getTime())
			{
				Event* swap = tree[i];
				tree[i] = tree[x];
				tree[x] = swap;
			}
		}
	}
}

Event* Queue::removeRandProc(int i)
{
	if (numberOfProc == 0)
	{
		cout << "Queue Empty!" << endl;
	}
	
	else
	{
		Event* removed = tree[front + i];

		tree[front + i] = tree[front];
		front = (front+1)%20;	
		
		numberOfProc--;
		return removed;
	}
}

bool Queue::inQueue(Event* temp)
{
	if (numberOfProc == 0)
	{
		return false;
	}

	else
	{
		for (int i = front;i<numberOfProc ;i++ )
		{
			if (tree[i]->getId() == temp->getId())
			{
				return true;
			}
		}
	}
	return false;
}







#endif


