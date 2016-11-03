#include <iostream>
#include <thread>

using namespace std;


template <class T>

int getArrayLen(T& array)

{

return (sizeof(array) / sizeof(array[0]));

}


void worker(int index)
{
    for (int i = 0; i < 60000000; i++)
    {
        cout << "i:" << index << "::::" << i  << endl;
        this_thread::sleep_for(0.1s);
    }
}

void multiThread()
{
    int size = thread::hardware_concurrency();
    thread *threads = new thread[size];


    for(int i = 1; i <= size; i++)
    {
        threads[i] = std::thread(worker, i);
    }
    for(int i = 1; i <= size; i++)
    {
       threads[i].join();
    }
}

int main()
{
    multiThread();
    return 0;
}
