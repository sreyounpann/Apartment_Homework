//
//  Man.cpp
//  HW2_Tesk1_Class
//
//  Created by Yeow Pann on 7/9/22.
//

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Man {
    
private:
        string Name;
        int Age;
        string Job;
public:
    Man():Name("Unknown"), Age(0),Job("Unknown"){}
    Man(string Name,int Age,string Job): Name(Name),Age(Age),Job(Job){};
    
    void set_Name(string Name){
        this -> Name = Name;
    }
    string get_name(){
        return Name;
    }
    void set_age(int Age){
        this-> Age = Age;
    }
    int get_age(){
        return Age;
        
    }
    void set_job(string Job){
        this -> Job = Job;
    }
    string get_job(){
        return Job;
    }
    void inputMan(){
        cout <<"Input name      : ";
        cin >> Name;
        cout <<"Input age       : ";
        cin >> Age;
        cout <<"Input job       : ";
        cin >> Job;
    }
    void input (Man man [], int number) {
        for (int i=0; i< number; i++) {
             man[i].inputMan();
            cout << endl;
        }

    }
    void outputMan(){
        cout <<"Name         : "<<Name<<endl;
        cout <<"Age          : "<< Age<< endl;
        cout <<"Job          : "<<Job<< endl;
    }    
        friend istream& operator >> (istream& in, Man& man) {
            cout << "Name       : ";
            in >> man.Name;
            cout << "Age        : ";
            in >> man.Age;
            cout << "Job      : ";
            in >> man.Job;
            return in;
        }
        friend ostream& operator << (ostream& out, Man& man) {
            out << "Name        : " << man.get_name() << endl;
            out << "Age         : " << man.get_age() << endl;
            out << "Job         : " << man.get_job() << endl;
            return out;
        }
};
