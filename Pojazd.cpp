//
//  Pojazd.cpp
//  RentCarSoft
//
//  Created by Karol Chojnacki on 04/03/2021.
//

#include "Pojazd.hpp"
#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>     /* srand, rand */
#include <time.h>

Pojazd::Pojazd(std::string x, std::string y, std::string rej, std::string z, Nadwozie w, double u, int n): marka(x), model(y), nr_rej(rej), VIN(z), nadwozie(w), silnik(u), rok(n){
};

Pojazd::Pojazd(){
    marka = "Default";
    model = "Default";
    nr_rej = "ZS" + std::to_string(rand() % 90999 + 10000);
    VIN = "GYYYXXXX";
    nadwozie = Nadwozie::Hatchback;
    silnik = 1.0;
    rok = 2021;
};

Pojazd::~Pojazd(){
    std::cout << "Pojazd " << nr_rej << " usunięty\n";
};

void Pojazd::wyswietlInfo(){
    std::cout << "Marka: " << marka;
    std::cout << "\nModel: " << model;
    std::cout << "\nNr rej.: " << nr_rej;
    std::cout << "\nRok produkcji: " << rok;
    std::cout << "\nVIN: " << VIN;
    std::cout << "\nTyp nadwozia: " << ToString(nadwozie);
    std::cout << "\nSilnik: " << std::fixed << std::setprecision(1) << silnik << std::endl;
};
