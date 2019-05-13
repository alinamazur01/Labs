    #include<iostream>
    #include<vector>
    #include<string>
     
    using namespace std;
     
     
    int main ()
    {
        string command;

        int number, begin = 0, size = 0;
     
        vector<int> queue(0);
     
        while(true)
        {
            cin >> command;
           
            if  (command == "push") {  
           
                scanf("%d", &number);
                queue.push_back(number);
                printf("ok\n");
                size++;
     
            } else if(command == "pop") {
               
                printf("%d\n", queue[begin]);
                begin++;
                size--;
           
            } else if(command == "front") {
     
                printf("%d\n", queue[begin]);
     
            } else if(command == "size") {
     
                printf("%d\n", size);
           
            } else if(command == "clear") {
           
                queue.clear();
                printf("ok\n");
                begin = 0;
                size = 0;
           
            } else if(command == "exit") {
           
               printf("bye\n");
               return 0;
           
            }
        }
    }
