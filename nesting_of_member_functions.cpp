#include<iostream>
#include<string>
using namespace std;

class binary
{
private:
    string s;
public:
   void read(void)
   {
       cout << "Enter a binary number: ";
       cin >> s;
   }
   void check_bin(void)
   {
       for (int i = 0; i < s.length(); i++)
       {
           if(s.at(i)!= '0' && s.at(i) != '1')
           {
               cout << "\nIncorrect binary number format...\nThe progress will now quit";
               exit(0);
           }
       }
   }  
   
   void one(void)
   {
       check_bin(); // calling member function
       for (int i = 0; i < s.length(); i++)
       {
           if(s.at(i) == '0')
                s.at(i)= '1';
            else
                s.at(i)= '0';

       }
   }
    void displayone(void)
    {
        one();
        cout << "\n The 1's complement of the above binary number is; " << s;

    }
};     

int main()
{
    binary b;
    b.read();
    b.displayone();

    return 0;
}

