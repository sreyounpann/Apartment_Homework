//
//  House.cpp
//  HW2_Tesk1_Class
//
//  Created by Yeow Pann on 5/9/22.
//
#pragma once
#include <iostream>
#include <string>
#include "Apartment.cpp"
#include "Man.cpp"
using namespace std;

class House {
    
private:
        string Name;
        string Address;
        string Condition;
        int count =0;
        Apartment apartments[10];
        Man man;
public:
            House() : Name("Unknown"),Address("Unknow"),Condition("Unknown"){};

            House(string Name,string Address,string Condition): Name(Name),Address(Address),Condition(Condition){};
            //Destructor
            ~House() {}

    void setName(string Name) {
        this->Name = Name;
    }
    string getName() {
        return Name;
    }
    void setAddress(string Address) {
        this->Address = Address;
    }
    string getAddress() {
        return Address;
    }
    void setCondition(string Condition){
        this -> Condition = Condition;
    }
    string getCondition(){
        return Condition;
    }
    
    
        void addApartment(Apartment apartment){
                apartments [count] = apartment;
                count++;
        }
        void displayAllApartment() {
            
            cout <<"\nApartment's name        : "<<Name<<endl;
            cout <<"Apatment's Locattion    : "<<Address<<endl;
          for (int i = 0; i < count; i++) {
              apartments[i].OutputApartment();
          }
        }
    void inputHouse(){
        cout <<"Type of house : ";
        cin >> Name;
        cout <<"Condition     : ";
        cin >> Condition;
        cout <<"Address       : ";
        cin >> Address;
    }
    void outputHouse(){
        cout <<"Type of House      : "<<Name<< endl;
        cout <<"Condition of House : "<<Condition<< endl;
        cout <<"Address            : "<<Address<<endl;
    }
    int search_apartment(int id) {
        for (int i = 0; i < count; i++) {
            if (apartments[i].getId() == id) {
                return i;
            }
        }
        return -1;
    }

    void update_apartment(int id) {
        int found = search_apartment(id);

        if (found == -1) {
            cout << ">>>> Invalid <<<< " << endl;
        }
        else {
                cout <<">>>> INPUT AMOUNT OF CUSTOMER...";
                cin >> count;
                for (int i = 0; i< count; i++) {
                    cout << endl;
                    cout<<"Customer "+ to_string(i+1)<<" Info : "<<endl;
                    man.inputMan();
                    apartments->add_man(man);
                }
            cout << "\n=====================================\n";
            cout << ">>>> Apartment & Man Information <<<< \n";
            apartments[found].OutputApartment();
            apartments->displayAllMan();
        }
    }
        };

