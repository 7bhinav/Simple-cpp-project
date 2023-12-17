#include <iostream>
#include <vector>
#include <string>

struct Task {
    std::string description;
    bool completed;
};

class TaskManager {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& description) {
        Task newTask;
        newTask.description = description;
        newTask.completed = false;
        tasks.push_back(newTask);
        std::cout << "Task added successfully.\n";
    }

    void viewTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks available.\n";
        } else {
            std::cout << "Tasks:\n";
            for (size_t i = 0; i < tasks.size(); ++i) {
                std::cout << i + 1 << ". " << tasks[i].description
                          << " - " << (tasks[i].completed ? "Completed" : "Pending")
                          << std::endl;
            }
        }
    }

    void markTaskAsCompleted(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks[index - 1].completed = true;
            std::cout << "Task marked as completed.\n";
        } else {
            std::cout << "Invalid task index.\n";
        }
    }

    void removeTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            std::cout << "Task removed successfully.\n";
        } else {
            std::cout << "Invalid task index.\n";
        }
    }
};

int main() {
    TaskManager taskManager;

    while (true) {
        std::cout << "\nTask Manager Menu:\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Mark Task as Completed\n";
        std::cout << "4. Remove Task\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cin.ignore(); // Clear input buffer
                std::cout << "Enter task description: ";
                std::string description;
                std::getline(std::cin, description);
                taskManager.addTask(description);
                break;
            }
            case 2:
                taskManager.viewTasks();
                break;
            case 3: {
                size_t index;
                std::cout << "Enter the task index to mark as completed: ";
                std::cin >> index;
                taskManager.markTaskAsCompleted(index);
                break;
            }
            case 4: {
                size_t index;
                std::cout << "Enter the task index to remove: ";
                std::cin >> index;
                taskManager.removeTask(index);
                break;
            }
            case 5:
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
