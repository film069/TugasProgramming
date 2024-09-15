#include <iostream>
#include<iomanip>
using namespace std;

int main (){
//suhu konverter
    char ConvertSuhu,repeat;
    float celcius, fahrenheit, kelvin, reamur;

do
{

    cout << "Convert Suhu (c/f/k/r): ";
    cin >> ConvertSuhu;

switch (ConvertSuhu)
{
case 'c':
    cout << "celcius = "; cin >> celcius;
    fahrenheit = (celcius*9/5)+32;
    kelvin = celcius + 273;
    reamur = celcius*4/5;
    cout << "reamur"<< setw(8) << "="<<setw(10) << reamur <<endl;
    cout << "fahrenheit" << setw(4) << "=" <<setw(10) << fahrenheit << endl;
    cout << "kelvin"<< setw(8) << "="<<setw(10) << kelvin <<endl;
    break;
case 'f':
    cout << "fahrenheit = "; cin >> fahrenheit;
    celcius = (fahrenheit-32)*5/9;
    kelvin = celcius + 273;
    reamur = celcius *4 / 5;
    cout << "reamur" << setw(8) <<"="<<setw(10)<< reamur <<endl; 
    cout << "celcius"<< setw(7) <<"="<<setw(10) <<celcius <<endl; 
    cout << "kelvin" << setw(8) <<"="<<setw(10)<<kelvin<<endl;
    break;
case 'k':
   cout << "kelvin = "; cin >> kelvin;
    celcius = kelvin-273;
    fahrenheit = (celcius*9/5)+32;
    reamur = celcius*4/5;
    cout << "reamur"<< setw(8) <<"="<<setw(10)<< reamur <<endl;
    cout << "celcius"<< setw(7) <<"="<<setw(10) << celcius <<endl; 
    cout << "fahrenheit" << setw(4) <<"="<<setw(10) << fahrenheit<<endl;
    break;
case 'r':
    cout << "reamur = "; cin >> reamur;
    celcius = reamur*5/4;
    kelvin = celcius + 273;
    fahrenheit = (celcius*9/5)+32;
    cout << "fahrenheit" << setw(4) <<"="<<setw(10) << fahrenheit <<endl;
    cout << "celcius" << setw(7) <<"="<<setw(10)<< celcius<<endl; 
    cout << "kelvin"<< setw(8) <<"="<<setw(10) << kelvin <<endl;
    break;
    }
cout << "Convert again?(y/n) : ";
cin >> repeat;   
} while (repeat == 'y');
}