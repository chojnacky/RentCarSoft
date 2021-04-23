//
//  Flota.cpp
//  RentCarSoft
//
//  Created by Karol Chojnacki on 10/03/2021.
//

#include "Flota.hpp"
#include "Pojazd.hpp"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>

Flota::Flota(){
    zlicz();
    std::fstream file("/Users/carallek/Docs/flota.txt", std::fstream::in );
    if ( ! file.is_open()  ) {
        std::cerr << "open failed" << std::endl;
        return;
    }
    int i = 0;
    flota = new Pojazd * [Flota::count];
    std::string a, b, c, d, e, f, g;
    while(file >> a >> b >> c >> d >> e >> f >> g){
        double fx = atof(f.c_str());
        flota[i] = new Pojazd(a, b, c, d, ToEnum(e), fx, std::stoi(g));
        i++;
    }
    file.close();
};

Flota::~Flota(){
    for(int i = 0; i < Flota::count; i++){
        delete flota[i];
    }
    delete flota;
};

void Flota::wyswietlListe(){
    for(int i = 0; i < Flota::count; i++){
        flota[i]->wyswietlInfo();
        std::cout << std::endl;
    }
};

void Flota::znajdzPojazd(){
    std::string rej;
    std::cout << "Podaj numer rejestracyjny: ";
    std::cin >> rej;
    for(int i = 0; i < Flota::count; i++){
        if(rej == flota[i]->nr_rej){
            std::cout << "Znaleziono pojazd:\n";
            flota[i]->wyswietlInfo();
            return;
        }
    }
    std::cout << "Pojazd nie odnaleziony\n";
};

void Flota::zlicz(){
    std::fstream file("/Users/carallek/Docs/flota.txt", std::fstream::in );
    if ( ! file.is_open()  ) {
        std::cerr << "open failed" << std::endl;
        return;
    }

    std::string a, b, c, d, e, f, g;
    while(file >> a >> b >> c >> d >> e >> f >> g)
       Flota::count++;
    file.close();
};
