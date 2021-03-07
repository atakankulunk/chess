/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Atakan
 *
 * Created on 07 Şubat 2021 Pazar, 16:09
 */

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

/*
 * 
 */
struct konum{
    int x;
    int y;
};
int konumbul(string konum) {
         char a=konum[0];
         int b=(int)konum[1]-48;
         int sonuc=((b-1)*10)+(int)(a-65);
        return sonuc;
 } //35  -> 5,3 F4
int main(int argc, char** argv) {
    konum at;
    at.x = 3;
    at.y = 5;
    
    string tahta[8][8];
    tahta[at.x][at.y] = "A";
    cout << tahta[at.x][at.y];
    int c = 1;
    while (true) {
        while (c == 1) {
            cout << "Sira Beyazlarin" << endl;
            cout << "konum girin" << endl;
            string k;
            cin >> k;
            cout << tahta[(konumbul(k)/10)][konumbul(k)%10] << endl;
            
            c++;
        }
        while (c == 2) {
            cout << "Sira Siyahlarin" << endl;
            c--;
        }
    }

    return 0;
}

