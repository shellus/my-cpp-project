#include <iostream>
#include <thread>
#include <vector>

using namespace std;
void work()
{
    int i;
    while (true)
    {
        i++;
    }
}

int main()
{
    vector<thread> ts;
    for(int i =0; i < thread::hardware_concurrency(); i++)
    {
        ts.push_back(thread(work));
    }
    for(int i=0;i<ts.size();i++)
    {

        ts.at(i).join();
    }

    return 0;
}
