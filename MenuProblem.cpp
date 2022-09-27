#include <iostream>
#include <stack>
using namespace std;

int mainMenu();
int subMenu();

class Stack
{
    public:
    stack<string> menuStack;
    void menuPush(string menu)
    {
        menuStack.push(menu);
    }
    void menuPop()
    {
        menuStack.pop();
    }  
    void displayTop()
    {
        cout<<menuStack.top()<<endl;
    }
};
int main()
{
    Stack obj;
    
    int option;
    while (true)
    {
        option = mainMenu();
        if (option == -1)
        {
            break;
        }
        else if (option == 1)
        {
            obj.menuPush("Menu 1");
            int op = subMenu();
            if (op == 0)
            {
                obj.menuPop();
                obj.displayTop();
            }
            else if (op == 1)
            {
                obj.menuPush("Menu 2");
                int op = subMenu();
                if (op == 0)
                {
                    obj.menuPop();
                    obj.displayTop();
                }
            }
            else
            {
                cout << "Wrong input!";
            }
        }
        else
        {
            cout << "Wrong input!";
        }
    }
}
int mainMenu()
{
    int op;
    cout << "-1-Exit"<<endl;
    cout << "1-Go to next menu"<<endl;
    cout << "Enter option:"<<endl;
    cin >> op;
    return op;
}
int subMenu()
{
    int op;
    cout << "0-Go back"<<endl;
    cout << "1-Go to next menu"<<endl;
    cout << "Enter option:"<<endl;
    cin >> op;
    return op;
}