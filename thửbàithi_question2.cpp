// thửbàithi_question2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include < string>


using namespace std;
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}
void xuat(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

  void PhanTu(int a[100], int n)
{
    int min, i;
    min = a[i];
for (i = 0; i <= n; i++)
{
     if (min > a[i]) { min = a[i]; };
}
cout << "So nho nhat cua mang la: " << min << '\n';
}

int main() {
    int a[100];
    int n;
    cout << "Nhap n: ";
    cin >> n;
    nhap(a, n);
    cout << "Xuat mang: " << endl;
    xuat(a, n);
    system("pause");
    return 0;
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
