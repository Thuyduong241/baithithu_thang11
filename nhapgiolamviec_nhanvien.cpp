// nhapgiolamviec_nhanvien.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<iostream>
#include<string>
using namespace std;

class nhanvien
{
public:
    int idnhanvien;
    char tennhanvien[20], diem[50];
    void get()
    {
        cout << "Nhap id cua nhan vien: ";
        cin >> idnhanvien;
        cout << "Nhap ten nhan vien: ";
        cin >> tennhanvien;
        cout << "Nhap diem cua nhan vien: ";
        cin >> diem;
    }
};
class luong :public nhanvien
{
    float lcoban;
public:
    void get1()
    {
        cout << "Nhap so diem: ";
        cin >> lcoban;

    }
    void calculate()
    {
        if (diem = 10)
        {
            lcoban = diem * 50;
        };
        if (diem 20) {
            lcoban = 10 * 50 + (diem - 10) * 75;
        };
        else if (diem = 30) {
            lcoban = 10 * 50 + 10 * 75 + (diem - 20) * 100;
        };
    }
    void display()
    {
        cout << idnhanvien << "\t" << tennhanvien << "\t" << diem << "\t" << lcoban << "\t";
    };
};

int main()
{
    int i, n;
    char ch;
    luong s[10];

    cout << "Nhap so nhan vien: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        s[i].get();
        s[i].get1();
        s[i].calculate();
    }
    cout << "\nid \tten \tdiem \tlcoban \n";
    for (i = 0; i < n; i++)
    {
        s[i].display();
    }
    return 0;
}