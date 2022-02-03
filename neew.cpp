#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    public:
        void getdata(void)
        {
            cout << "Enter the number: ";
            cin >> s;
        }
        
        void checkdata(void){
            for (int i = 0; i < s.length(); i++)
            {   
                if(s.at(i)!= '1' && s.at(i)!= '0')
                {
                    cout << "you have entered the wrong data, the program will quit now.";
                    exit(0);
                }
            }
            
        }

        void displaydata(void)
        {
            checkdata();
            for (int i = 0; i < s.length(); i++)
            {
                if(s.at(i)== '0')
                    s.at(i) = '1';
                else
                    s.at(i) = '0';
            }
            cout << s << "\n";
            

        }
};

int main()
{
    binary b;
    b.getdata();
    b.displaydata();

    return 0;
    
}