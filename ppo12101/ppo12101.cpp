#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
ofstream MyFile;
int main() {
    string linia;
    fstream plik;
    int x;
    int y;
    plik.open("wsp.txt", ios::in);
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            plik >> x >> y;
            cout << "\nx= " << x << "\ty= " << y;
        }
    };
    MyFile.open("wsp2.txt");
    MyFile << "tutaj jakaś informacja";
    MyFile.close();
    plik.close();

}