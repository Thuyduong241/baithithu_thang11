// thửbàithi_question4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include < string >
using namespace std;
int main()
{
    cout << "BT_B07K13 \n";


    double mathematic , physical , chemistry ;
    double dtb;
    cout << " tinh diem trung binh\n ";
    cout << " Nhap diem mathematic: ";
    cin >> mathematic;


    cout << " nhap diem physical: ";
    cin >> physical;

    cout << " nhap diem chemistry : ";
    cin >> chemistry ;

    dtb = (mathematic + physical + chemistry) / 3;
    cout << " diem trung binh = " << dtb;
    if (dtb < 5) cout << " Fail exam ";
    if (dtb >= 5 && dtb <= 7) cout << " Average  " << '\n';
    if (dtb >= 7 && dtb <= 8) cout << "Fair " << '\n';
    else if (dtb > 8.0) cout << " Good "<< endl; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
