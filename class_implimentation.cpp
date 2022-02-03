#include<iostream>

using namespace std;

class item
{
    int number;
    float cost;
public:
    void getdata(int a, float b);
    void putdata(void)
    {
        cout << "number= " << number << "\n";
        cout << "cost= " << cost << "\n";
    }
};

void item :: getdata(int a, float b)
{
    number = a;
    cost = b;
}

int main()
{
    item x;
    cout << "\nObject x \n";
    x.getdata(100, 75.5);

    x.putdata();
    item y;
    cout << "\nObject y \n";
    y.getdata(101, 1000);

    y.putdata();


    return 0;
}

/* ERROR IN THIS PROGRAM

HAHAHA no errors mother fucker



*/



