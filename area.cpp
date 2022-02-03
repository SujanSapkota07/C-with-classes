/* C++ program to find Area using Function Overloading  */

#include<iostream>
#include<math.h>
using namespace std;

float triangle1( int firstside, int secondside, int thirdside)
{   
    float semiCircle, area1;
    semiCircle = float(firstside + secondside + thirdside)/2;
    area1 = sqrt(semiCircle*(semiCircle-firstside)*(semiCircle-secondside)*(semiCircle-thirdside));
    return area1;
}
// int circle(int l,int b)
// {
    
// }
// float rectangle(float r)
// {

// }
// float square(float bs,float ht)
{

}

float triangletype(void)
{
    int type, firstside, secondside, thirdside;
    cout << "press the suitable number";
    cout<< "1. Three sides are given";
    cout<< "2. one angle and two sides are given";
    cout<< "3. three co-ordinates are given";
    cin >> type;

    switch (type)
    {
    case 1:
        cout<<"Enter three sides: ";
        cin >>firstside >> secondside >> thirdside;
        area = float tirangle1(firstside, secondside, thirdside);
    
        break;
    case 2:
        
    
    default:
        break;
    }

    return area;

}
int main()
{

    int number;
    float area;
    cout << "press the number to find out the following:";
    cout<< "1. triangle";
    cout<< "2. circle";
    cout<< "3. rectangle";
    cout<< "4. square";
    cin >> number;
    
    
    switch (number)
    {
    case 1:
        float triangletype(void);
    
        break;
    
    default:
        break;
    }

}