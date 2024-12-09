#include "Task.h"
#include <iostream>
#include <vector>
using namespace std;

Task::Task(string desc) : description(desc), isComplete(false) {}
 
string Task::getDescription()const{
 	 return description; 
 }

bool Task::getStatus() const{
 return isComplete; 
}

void Task::markComplete(){
	isComplete = true;
}

 ostream& operator<<(ostream& os, const Task& task) {
 	os << task.description << " [" << (task.isComplete ? "Completed" : "Not Completed") << "]";
    return os;
}

//Helper functions

void markTask(vector<Task>& vec){
	int index;
	//printTasks(vec);
	cout << "Choose which task to mark complete (by the index)";

	cin.clear();
	cin >> index;

	if (index >= 0 && index < vec.size()) {
        vec[index].markComplete();
        cout << "The task was marked complete!" << endl;
    } else {
        cout << "Invalid index!" << endl;
    }
}

void addTask(vector<Task>& vec){
	//add to the vector
	cout << "Add a task: " << endl;

	string taskDescription;
	getline(cin,taskDescription);

	Task newTask(taskDescription);
	vec.push_back(taskDescription);
}

void printTasks(vector<Task>& vec){
	int index = 0;
	cout << "Viewing all tasks: " << endl;
	//Print out the vector
	for (int i = 0; i < vec.size(); ++i)
	{

		cout << "(" << index << ") " << vec[i] << endl;
		index += 1;
	}
}

void eraseTask(vector<Task>& vec){
	cout << "Delete task (By index): " << endl;
	int remove;

	cin >> remove;
	//check to see if the vector has the required index
	if (remove >= 0 && remove < vec.size()) {
        vec.erase(vec.begin() + remove);  // Remove the task at the specified index
    } else {
        cout << "Invalid index!" << endl;
    }
}
