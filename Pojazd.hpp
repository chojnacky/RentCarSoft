//
//  Pojazd.hpp
//  RentCarSoft
//
//  Created by Karol Chojnacki on 04/03/2021.
//

#ifndef Pojazd_hpp
#define Pojazd_hpp

#include <stdio.h>
#include <string>
#include <iostream>

enum Nadwozie {
    Hatchback,
    Liftback,
    Sedan,
    Kombi,
    Limuzyna,
    SUV
};

inline const char* ToString(Nadwozie x){
    switch (x){
        case Nadwozie::Hatchback: return "Hatchback";
        case Nadwozie::Liftback: return "Liftback";
        case Nadwozie::Sedan: return "Sedan";
        case Nadwozie::Kombi: return "Kombi";
        case Nadwozie::Limuzyna: return "Limuzyna";
        case Nadwozie::SUV: return "SUV";
        default:      return "[Nieznany Typ Nadwozia]";
    }
}

inline const Nadwozie ToEnum(std::string x){
    if (x == "Hatchback") return Nadwozie::Hatchback;
    else if (x == "Lifback") return Nadwozie::Liftback;
    else if (x == "Sedan") return Nadwozie::Sedan;
    else if (x == "Kombi") return Nadwozie::Kombi;
    else if (x == "Limuzyna") return Nadwozie::Limuzyna;
    else if (x == "SUV") return Nadwozie::SUV;
    else return Nadwozie::Hatchback;
}

class Pojazd {
public:
    std::string marka;
    std::string model;
    std::string nr_rej;
    std::string VIN;
    Nadwozie nadwozie;
    double silnik;
    int rok;
    

    Pojazd(std::string, std::string, std::string, std::string, Nadwozie, double, int);
    Pojazd();
    ~Pojazd();
    void wyswietlInfo();
    
};
#endif /* Pojazd_hpp */
