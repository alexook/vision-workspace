#include <stdint.h>
#include <sys/time.h>
#include <time.h>
#include <iostream>
#include <chrono>
using namespace std;

int main()
{
    int64_t t1, t2;
    while (true) {
        t1 = chrono::duration_cast<chrono::milliseconds>(chrono::system_clock::now().time_since_epoch()).count();
        t2 = time(0);

        if (t1/1000 != t2) cout << t1 << " " << t2 << endl;
    }

    return 0;
}

