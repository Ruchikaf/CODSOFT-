#include <iostream>
#include <string>
using namespace std;
const int MAX_TASKS = 10;

class ToDoList {
private:
    string tasks[MAX_TASKS];
    int numTasks;

public:
    ToDoList() : numTasks(0) {}

    void addTask(const string &task) {
        if (numTasks < MAX_TASKS) {
            tasks[numTasks] = task;
            numTasks++;
            cout << "Task added: " << task << endl;
        } else {
            cout << "The list is full." << endl;
        }
    }
      void display()
    {
        if (numTasks == 0) {
            cout << "Todo list is empty." << endl;
        }
        else
            {
            cout << "Tasks in the To do list:" << endl;
            for (int i = 0; i < numTasks; i++) {
                cout << i + 1 << ". " << tasks[i] << endl;
                     }
            }
    }
    void complete()
    {
        int num,i;
        cout<<"\nEnter the no. of task which is completed."<<endl;
        cin>>num;
        cout<<"TASK:"<<num<<"\ncompleted"<<endl;
    }
    void removeTask(int index)
     {

        if (index >= 1 && index <= numTasks)
            {
            cout << "Task removed: " << tasks[index - 1] << endl;
            for (int i = index - 1; i < numTasks - 1; i++)
                {
                tasks[i] = tasks[i + 1];
                //completed[i] = completed[i + 1];
                  }
            numTasks--;
           }
        else {
            cout << "Invalid task index" << endl;
        }
     }
};

int main() {
    ToDoList todoList;

    int ch;
    while (1) {
       cout<<"\n1.ADD TASK"<<endl;
        cout<<"2.VIEW TASK"<<endl;
        cout<<"3.MARK TASK AS COMPLETED"<<endl;
        cout<<"4.REMOVE TASK"<<endl;
        cout<<"5.EXIT\n\n"<<endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
        case 1: {
            cin.ignore();
            string task;
            cout << "Enter task: ";
            getline(cin, task);
            todoList.addTask(task);
            break;
        }
        case 2:
             todoList.display();
            break;
        case 3:
            todoList.complete();
            break;
        case 4:
            int index;
            cout<<"Enter the index:"<<endl;
            cin>>index;
            todoList.removeTask(index);
            break;
        case 5:

            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
