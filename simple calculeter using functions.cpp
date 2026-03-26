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

int subtract (int number1 , int number2)
{
return number1 - number2;
}

float division ( float number1, float number2)
{
return number1 / number2;
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
     cout << "3) subtract."<<endl;
     cout << "4) divasion."<<endl;
     cin >> selection;
     int result;
     switch (selection)
     {
         case 1 : result = add(n1 ,n2);
                break;
         case 2 : result = product(n1 ,n2);
                break;
         case 3 : result = subtract(n1 ,n2) ;
                break;
         case 4 : result = division(n1 ,n2)  ;
                break;
         default :
         cout << "inccorct input"<<endl;
     }
     cout << "the Result : "<<result;




}
 int main()

 {
  calculatorApp();
 }
