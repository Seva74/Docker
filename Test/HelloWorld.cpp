﻿#include <iostream>
int a;
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "введи 0 или 1, пж" << endl;
    cin >> a;
    if (a == 1) cout << endl<<"чел, настоящие программисты вводят 0\n";
    else if(a==0) cout << "красава\n";
    else cout << "я же сказал, либо 0, либо 1!\n";
    cin >> a;
    return 0;
}