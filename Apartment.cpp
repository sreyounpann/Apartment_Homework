//
//  Apartment.cpp
//  HW2_Tesk1_Class
//
//  Created by Yeow Pann on 5/9/22.
//

#pragma once
#include <iostream>
#include "Man.cpp"
#include <string>
using namespace std;

class Apartment {
private:

    int ApartmentId;
    int Qty;
    Man Name[10];
  int count = 0;
  
public:
    Apartment():Qty(0), ApartmentId(0){}
    Apartment(int ApartmentId,int Qty): ApartmentId(ApartmentId),Qty(Qty){};
    
    ~Apartment() {
    }

    void setId(int ApartmentId) {
        this->ApartmentId = ApartmentId;
    }
    int getId() {
        return ApartmentId;
    }
    void setQty(int Qty){
        this->Qty = Qty;
    }
    int getQty(){
        return Qty;
    }
    void inputApartment() {
        cout << "\n[+]Input Apartment information " << endl;
        cout << "Enter Apartment Id    : ";
        cin >> ApartmentId;
        cout << "Available Floor       : ";
        cin >> Qty;
    }
    void OutputApartment(){
        cout <<"Apartment NO            : "<<ApartmentId<< endl;
        cout <<"Apartment Floor         : "<<Qty<< endl;
        cout << endl;
    }
    void add_man(Man name1) {
        Name[count] = name1;
        count++;
    }
    void displayAllMan() {

        for (int i = 0; i < count; i++)
        {
            Name[i].outputMan();
        }
}
} ;
