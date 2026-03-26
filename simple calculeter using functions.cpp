#include <iostream>
using namespace std;

int add(int number1, int number2)
{
    return number1+ number2;
}

int product(int number1 , int number2)
{
    return number1 * number2;
}

int Getuserinput(int index_sequence)
{
    int n;
    cout << "enter number "<<index_sequence<< ":"<<endl;
    cin>>n;
    return n;
}

void calculatorApp()
{
        int n1 = Getuserinput(1);
        int n2 = Getuserinput(2);


     int selection;
     cout<< "select  calculator option : "<<endl;
     cout<< "1) sum."<<endl;
     cout<< "2) product."<<endl;
     cin >> selection;
     int result;
     switch (selection)
     {
         case 1 : result = add(n1 ,n2);
                break;
         case 2 : result = product(n1 ,n2);
     }
     cout << "the Result : "<<result;




}
 int main()

 {
  calculatorApp();
 }
