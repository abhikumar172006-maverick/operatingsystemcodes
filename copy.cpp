#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream source ("source.txt");
    ofstream destination("copy.txt");

    destination << source.rdbuf();

    source.close();
    destination.close();

    cout << "File copied successfully";
    return 0;
}