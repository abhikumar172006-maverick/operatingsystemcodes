#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    fork();

    cout << "Hello from process" << endl;

    return 0;
}