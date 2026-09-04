#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << "Kernel Version: ";
    system("uname -r");

    cout << "CPU Type: ";
    system("uname -m");

    cout << "CPU Information: \n";
    system("Iscpu");

    return 0;
}