#include <iostream>
#include <pthread.h>
using namespace std;

int n;
long long sum = 0;

void* calculateSum(void* arg)
{
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        
    }

    pthread_exit(NULL);

}

int main()
{
    cout << "Enter n: ";
    cin >> n;

    pthread_t thread;

    pthread_create(&thread, NULL, calculateSum, NULL);

    pthread_join(thread, NULL);

    cout << "Sum = " << sum << endl;

    return 0;
}
