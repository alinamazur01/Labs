#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main ()
{
    string command;
    int number;
    vector<int> stack(0);

    while(true)
    {
        cin >> command;
        
        if  (command == "push") {  
        
            number = 0;
            cin >> number;
            stack.push_back(number);
            cout << "ok" << endl;

        } else if(command == "pop") {

            cout << stack[stack.size() - 1] << endl;
            stack.pop_back();
        
        } else if(command == "back") {

            cout << stack[stack.size() - 1] << endl;

        } else if(command == "size") {

            cout << stack.size() << endl;
        
        } else if(command == "clear") {
        
            stack.clear();
            cout << "ok" << endl;
        
        } else if(command == "exit") {
           cout << "bye" << endl;
           return 0;
        
        }
    }
}

