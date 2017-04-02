//CS433 Assignment 3
//Carlos Ferrer, Brandon Herbert
//
//
//Purpose
//Create a method of testing Scheduling



#include "Event.h"
#include "Queue.h"
#include "random.h"

using namespace std;

int main()
{
	int currentTime = 0;
	int quitTime = 300;
	
	cout << "This program runs a simulation of Scheduling algorithms." << endl;
	cout << "By: Brandon Herbert and Carlos Ferrer." << endl;
	cout << "Simulating First Come First Serve now!" << endl;
	
	Event* FCFS1[10];
	Event* FCFS2[20];
	Event* FCFS3[100];
	
	// creating new tables to add into the queues
	Queue *QFCFS1 = new Queue();
	for (int i =0 ; i < 10 ; i++ )
	{
		FCFS1[i] = new Event();
		FCFS1[i] -> setId(i);
		FCFS1[i] -> setTime(ranInt(30, 100)); //instructed 
		FCFS1[i] -> setType (0);
		QFCFS1 -> insertProc(FCFS1[i]);

	}
	
	Queue *QFCFS2 = new Queue();
	for (int i =0 ; i < 20 ; i++ )
	{
		FCFS2[i] = new Event();
		FCFS2[i] -> setId(i);
		FCFS2[i] -> setTime(ranInt(30, 100)); //instructed 
		FCFS2[i] -> setType (0);
		QFCFS2 -> insertProc(FCFS2[i]);

	}
	
	Queue *QFCFS3 = new Queue();
	for (int i =0 ; i < 100 ; i++ )
	{
		FCFS3[i] = new Event();
		FCFS3[i] -> setId(i);
		FCFS3[i] -> setTime(ranInt(30, 100)); //instructed 
		FCFS3[i] -> setType (0);
		QFCFS3 -> insertProc(FCFS3[i]);

	}
	
	//used to test if processes were added properly
	/*
	cout << "First Come First Serve with 10 processes in the Queue: " << endl;
	QFCFS1->display();
	
	cout << "First Come First Serve with 20 processes in the Queue: " << endl;
	QFCFS2->display();
	
	cout << "First Come First Serve with 100 processes in the Queue: " << endl;
	QFCFS3->display();
	*/
	
	
	//do first come first serve here //
	
	
	
	// end of the first come first serve here //
	
	cout << "Simulating Shortest Job First now!" << endl;
	
	currentTime = 0;
	quitTime = 300;
	
	Event* SJF1[10];
	Event* SJF2[20];
	Event* SJF3[100];

	Queue *QSJF1 = new Queue();
	for (int i =0 ; i < 10 ; i++ )
	{
		SJF1[i] = new Event();
		SJF1[i] -> setId(i);
		SJF1[i] -> setTime(ranInt(30, 100)); //instructed 
		SJF1[i] -> setType (0);
		QSJF1 -> insertProc(SJF1[i]);
		QSJF1 -> sort();

	}
	
	Queue *QSJF2 = new Queue();
	for (int i =0 ; i < 20 ; i++ )
	{
		SJF2[i] = new Event();
		SJF2[i] -> setId(i);
		SJF2[i] -> setTime(ranInt(30, 100)); //instructed 
		SJF2[i] -> setType (0);
		QSJF2 -> insertProc(SJF2[i]);
		QSJF2 -> sort();

	}
	
	Queue *QSJF3 = new Queue();
	for (int i =0 ; i < 100 ; i++ )
	{
		SJF3[i] = new Event();
		SJF3[i] -> setId(i);
		SJF3[i] -> setTime(ranInt(30, 100)); //instructed 
		SJF3[i] -> setType (0);
		QSJF3 -> insertProc(SJF3[i]);
		QSJF3 -> sort();

	}
	
	//used to test and ensure the processes were being added properly and have been sorted
	/*
	cout << "Shortest Job First with 10 processes in the Queue: " << endl;
	QSJF1->display();
	
	cout << "Shortest Job First with 20 processes in the Queue: " << endl;
	QSJF2->display();
	
	cout << "Shortest Job First with 100 processes in the Queue: " << endl;
	QSJF3->display();
	*/
	
	//do shortest job first here //
	
	
	
	// end of shortest job first here //
	
	
	/*statistics to be printed for individual processes
	
	cout << "Start Time: " << endl;
	cout << "End Time: " << endl;
	cout << "Service Time: " << endl;
	cout << "Turnaround Time: " << endl;
	cout << "Waiting Time: " << endl;
	*/
	
	// statistics to be printed for general program
	cout << "CPU Utilization: " << endl;
	cout << "Throughput Time: " << endl;
	cout << "Average Turnaround Time: " << endl;
	cout << "Average Waiting Time: " << endl;
	
	//
	
	
	

}



