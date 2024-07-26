#include<iostream>
using namespace std;
#include<math.h>
#include<iomanip>

int main(){
    int cel,fah;
    cout << "Enter the fah value : " <<endl;
    cin>>fah;
    cel=(fah-32)/1.8;
    // c=1.8c+32
    // k=(c+273)
    cout << "the tempature is celsius is: " <<setw(3) <<cel;

}