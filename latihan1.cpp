#include <iostream>
using namespace std;

int main()
{ // Begin
// Numeric bil
int bil;
// Character status
string status;
//Display "masukkan bilangan = "
cout << "Masukkan bilangan = ";
// Accept bil
cin>> bil;
//if (bil == 0)
if (bil== 0)
//status = "nol"
status = "nol";
//else if (bil %2 == 0)
else if (bil % 2 == 0)
// status "genap"
status = "genap";
// else
else
// status = "ganjil"
status = "ganjil";
//display "bilangannya =" + status
cout <<"bilangannya = " << status;

//rerata = (nilM + nilB)
}//END