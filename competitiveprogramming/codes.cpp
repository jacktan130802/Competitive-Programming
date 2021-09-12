#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    /*Basic types*/

    int integer;
    long long1;//by default int long
    char character;
    float floatnumber;
    double doublenumber;
    cin >> integer;
    cin >> long1;
    cin >> character;
    cin >> floatnumber;
    cin >> doublenumber;
    cout << integer << endl;
    cout << long1 << endl;
    cout << character << endl;
    //*********************Using fixed************************//
    cout << fixed << floatnumber << setprecision(3) << endl;
    cout << fixed << doublenumber << setprecision(9) << endl; //Fixed for precision. How to do scanf? 


    /*  printf("% .3f", floatnumber);*/










    return 0;
}