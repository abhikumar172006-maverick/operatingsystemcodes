#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;

int main()
{
    int pid = fork();

    if (pid < 0 )
    {
        cout << "Fork failed" << endl;

    }
    else if (pid == 0)
    {
        cout << "Child is running" << endl;

    }
    else
    {
        wait(NULL);
        cout << "Parent is running" << endl;
    }

    return 0;
    }
    
