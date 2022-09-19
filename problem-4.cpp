#include<iostream>
using namespace std;

class Counter{
    private:
        static int counter;
    public:
        Counter()
        {
            Counter::counter++;
        }
        static void show_counter()
        {
            cout<<Counter::counter<<endl;
        }
};
int Counter::counter=0;

int main()
{
    Counter c1,c2,c3;
    Counter::show_counter();
}