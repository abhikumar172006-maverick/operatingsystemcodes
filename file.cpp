#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string source, destination;


    cout << "Enter source file name: ";
    cin >> source;

    cout << "Enter destinatio file name: ";
    cin >> destination;
     
    ifstream input(source);

    if (!input)
    {
       cout << "source file does not exist!" << endl;
        return 1;


    }

     ifstream check(destination);

     if (check)
     {
        cout << "Destination file already exists!" << endl;
        return 1;

     }

     check.close();

     ofstream output(destination);

     if (!output)
     {
        cout <<"cannot create destination file!" << endl;
        return 1;
     }

        string line;
        while (getline(input, line))
        {
            output << line << "\n";

        }

        input.close();
        output.close();

        cout << "File copied successfully!" << endl;
        return 0;

    }



