#include "Task.h"
#include <iostream>
using namespace std;

int main(){

		vector<Task> todos;
		int input;

		cout << "Todo List" << endl;
		cout << "1) Add a task" << endl;
		cout << "2) View all tasks" << endl;
		cout << "3) Delete task (By index)" << endl;
		cout << "4) Mark task completed" << endl;
		cout << "5) Exit the application" << endl;

	do {
		cin >> input;

		cin.ignore();

		switch (input) {
			case 1:
				addTask(todos);
				cout << "\n";
				break;
	 		case 2:
				printTasks(todos);
				cout << "\n";
				break;
			case 3:
				eraseTask(todos);
				cout << "\n";
				break;
	  		case 4:
				cout << "Mark task completed: " << endl;
				markTask(todos);
				break;
			case 5:
				cout << "Exiting app"  << endl;
				cout << "\n";
				break;
			}
			} while (input != 5);
	return 0;
}