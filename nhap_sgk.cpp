// nhap_sgk.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int quantity1, quantity2, quantity3, cost1, cost2, cost3;
    cout << "So luong sach giao khoa muon mua: ";
    cin >> quantity1;
    cout << "Don gia sach giao khoa: ";
    cin >> cost1;
    cout << "So luong sach tham khao muon mua: ";
    cin >> quantity2;
    cout << "Don gia sach tham khao: ";
    cin >> cost2;
    cout << "So luong tap chi muon mua: ";
    cin >> quantity3;
    cout << "Don gia tap chi: ";
    cin >> cost3;
    cout << "Tong cac mat hang: " << endl;
    cout << "So luong sach giao khoa mua: " << quantity1 << endl;
    cout << "Don gia: " << cost1 << endl;
    cout << "Tong tien sach giao khoa: " << quantity1 * cost1 + (quantity1 * cost1) * 0.05;
    cout << "So luong sach tham khao mua: " << quantity2 << endl;
    cout << "Don gia: " << cost2 << endl;
    cout << "Tong tien sach tham khao: " << quantity2 * cost2 + (quantity2 * cost2) * 0.08;
    cout << "So luong tap chi mua: " << quantity3 << endl;
    cout << "Don gia: " << cost3 << endl;
    cout << "Tong tien tap chi: " << quantity3 * cost3 + (quantity3 * cost3) * 0.1;
    return 0;
}
