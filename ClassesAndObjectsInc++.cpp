#include<iostream>

using namespace std;
// class is just a blueprint for a new datatype. Creating a new class means creating new datatype
// object is actual instancs of that class or an actual book



class Books{ // declearing a class
    
    public:
        string title;
        string author;
        int code;

        Books(string atitle, string aauthor, int acode);
};



int main()
{
    
    Books book1("Engineering thermodynamics", "Engineering thermodynamics", 1123);

    cout << book1.title << " by " << book1.author << endl;

    return 0;
}