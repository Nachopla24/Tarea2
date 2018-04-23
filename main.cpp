#include <iostream>
#include <fstream>

using namespace std;


void contar_linea();


int main()
{

    contar_linea();
    return 0;
}

void contar_linea(){
     ifstream fin("utem.csv");
    int ct=0;

    while (fin.good()){
        if (fin.get()=='\n')
            ct++;
    }
cout << ct-1;
}
