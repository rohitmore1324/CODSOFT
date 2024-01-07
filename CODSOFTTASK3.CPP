// Build a simple console-based to-do list manager that allows users to add, view, and delete tasks
#include <iostream>
#include <vector>

using namespace std;

class ToDoListManager {
private:
    vector<string> tasks;
public:
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Task \"" << task << "\" added successfully.\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks available.\n";
        } else {
            cout << "Tasks:\n";
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i] << "\n";
            }
        }
    }

    void deleteTask(size_t taskIndex) {
        if (taskIndex >= 1 && taskIndex <= tasks.size()) {
            string deletedTask = tasks[taskIndex - 1];
            tasks.erase(tasks.begin() + taskIndex - 1);
            cout << "Task \"" << deletedTask << "\" deleted successfully.\n";
        } else {
            cout << "Invalid task index. Please provide a valid index.\n";
        }
    }
};

int main() {
    ToDoListManager toDoListManager;
    while (true) {
        cout << "\n!!!! TO DO LISTMANGEMENT !!!!\n";
        cout << "\n1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\n";
        cout << "Enter your choice (1/2/3/4): ";
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: {
                string task;
                cout << "Enter the task: ";
                cin.ignore();
                getline(cin, task);
                toDoListManager.addTask(task);
                break;
            }
            case 2:
                toDoListManager.viewTasks();
                break;
            case 3: {
                size_t indexToDelete;
                cout << "Enter the index of the task to delete: ";
                cin >> indexToDelete;
                toDoListManager.deleteTask(indexToDelete);
                break;
            }
            case 4:
                cout << "Exiting the to-do list manager. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option (1/2/3/4).\n";
                break;
        }
    }
    return 0;
}
