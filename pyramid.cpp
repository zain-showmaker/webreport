#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout << "enter the number of rows of the pyramid you want to draw : " <<endl;
    cin >> rows;

    for (int i = 1 ; i <= rows ; i++)
    {
      for (int s = 1 ; s <= (rows - i) ; s++)
      {
          cout << " ";
      }

      for (int j = 1 ; j <= (i * 2) - 1  ; j++)
      {
         cout << "*";

      } cout << endl;
    }

}
