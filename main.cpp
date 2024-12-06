#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Task{
private: 
	string description;
	bool isComplete;
public:
	Task(string desc) : description(desc), isComplete(false) {}
	string getDescription() const { return description; }
    bool getStatus() const { return isComplete; }
    void markComplete() { isComplete = true; }
};

void addTask(vector<string>& vec){
	//add to the vector
	cout << "Add a task: " << endl;

	string taskDescription;
	getline(cin,taskDescription);

	Task newTask(taskDescription);
	vec.push_back(taskDescription);
}

void printTasks(vector<string>& vec){
	cout << "Viewing all tasks: " << endl;
	//Print out the vector
	for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << endl;
	}
}

void eraseTask(vector<string>& vec){
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

int main(){

		vector<string> todos;
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
				cout << "\n";
				break;
			case 5:
				cout << "Exiting app"  << endl;
				cout << "\n";
				break;
			}
			} while (input != 5);
	return 0;
}