// Queue header file
//CS433 Assignment 3
//Carlos Ferrer, Brandon Herbert
//
//
//Purpose
//Create a priority queue

#ifndef Queue_H
#define Queue_H


#include <iostream>
#include <string>
#include "Event.h"

using namespace std;

class Queue
{
	private:
		int numberOfProc;
		int front;
		int rear;
		Event* tree[100];
		
		int startTime;
		int totalDuration;
		int remainingDuration;
		int avgBurst;
		int nextBurst;
		int IOBurst;
	
	public:
		int size();
		void insertProc(Event* newProc);
		Event* removeProc();
		void display();
		void sort();
		Event* removeRandProc(int i);
		bool inQueue(Event* temp);
		
		int getStartTime();
		int getTotalDuration();
		int getRemainingDuration();
		int getAvgBurst();
		int getNextBurst();
		int getIOBurst();
};

#endif