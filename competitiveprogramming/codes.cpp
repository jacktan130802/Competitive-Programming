#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
 void odd(int x) {
     if (x % 2 != 0) {
         cout << "odd" << endl ;
     }
     //else even
     else
         cout << "even" <<endl; 
}
 void toString(int x) {
     switch (x) {
     case 0: cout << "zero"<<endl;break;
     case 1: cout << "one"<<endl;break;
     case 2: cout << "two"<<endl;break;
     case 3: cout << "three"<<endl;break;
     case 4: cout << "four"<<endl;break;
     case 5: cout << "five"<<endl;break;
     case 6: cout << "six"<<endl;break;
     case 7: cout << "seven"<<endl;break;
     case 8: cout << "eight"<<endl;break; 
     default: cout << "nine"<<endl;break;
       
     }
 }
 void morethan9(int x) {
        
 }
int main()
{
    /***********************Basic types****************************/

    //int integer;
    //long long1;//by default int long
    //char character;
    //float floatnumber;
    //double doublenumber;
    //cin >> integer;
    //cin >> long1;
    //cin >> character;
    //cin >> floatnumber;
    //cin >> doublenumber;
    //cout << integer << endl;
    //cout << long1 << endl;
    //cout << character << endl;
    ////*********************Using fixed************************//
    //cout << fixed << floatnumber << setprecision(3) << endl;
    //cout << fixed << doublenumber << setprecision(9) << endl; //Fixed for precision. How to do scanf? 

    //C libs
    /*  printf("% .3f", floatnumber);*/



    /***********************Conditional loops****************************/

    int x, x1; 
    cin >> x;
    cin >> x1;
    bool num1, num2 = false;
    //if (x <= 9)
    //    num1 = true;
    //if (x1 <= 9)
    //    num2 = true;
    ////num1 less than 9
    //if (!num1) {
    //    x = 9;
    //}
    ////num2 less than 9
    //if (!num2) {
    //    x1 = 9;
    //}
    toString(x);
    toString(x1);
    odd(x);
    odd(x1);


    return 0;
}
