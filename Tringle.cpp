#include<iostream>
using namespace std;
#include <conio.h>
#include<iomanip>
#include<math.h>
int main(){

double base,height,area;
cout <<"Enter base : ";
cin>> base;
cout <<"Enter height : ";
cin>> height;
area =(double)1/2*base*height;
cout <<setw(10) << "Area of tringle ="<<area;

getch();
}