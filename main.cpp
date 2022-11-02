//
//  main.cpp
//  HW2_Tesk1_Class
//
//  Created by Yeow Pann on 5/9/22.
//
//#pragma once
#include <iostream>
#include "House.cpp"
#include "Apartment.cpp"
#include "Man.cpp"
using namespace std;
int main()
{
    House house;
    Apartment apartment;
    Man man;
    
    int count = 0;
    cout <<"------------- Welcome to Apartment System -------------\n\n";
    house.inputHouse();
    cout << "\n=====================================\n";
    cout << "\nHow many apartment? : ";
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        apartment.inputApartment();
        house.addApartment(apartment);

    }
    cout << "\n=====================================\n";
    house.displayAllApartment();
    cout << "\n=====================================\n";
    int id;

    cout << "\nWhich apartment you want to insert Customer? \n >>> Input apartment id   : ";
    cin >> id;

    cout << "\n=====================================\n";
    house.search_apartment(id);
    house.update_apartment(id);
    return 0;
}


