#include <iostream>
#include <pthread.h>
using namespace std;

long long sum = 0;

void* calculate(void* arg) {
    int n = *(int*)arg;

    for (int i = 1; i <= n; i++)
        sum += i;

    return NULL;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    pthread_t thread;

    pthread_create(&thread, NULL, calculate, &n);
    pthread_join(thread, NULL);

    cout << "Sum = " << sum << endl;

    return 0;
}
