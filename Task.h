#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <vector>
using namespace std;

class Task {
private: 
	string description;
	bool isComplete;

public:
	Task(string desc);
	string getDescription() const;
    bool getStatus() const;
    void markComplete();

    friend ostream& operator<<(ostream& os, const Task& task);
};

//declaring my helper functions
void markTask(vector<Task>& vec);
void addTask(vector<Task>& vec);
void printTasks(vector<Task>& vec);
void eraseTask(vector<Task>& vec);

#endif
