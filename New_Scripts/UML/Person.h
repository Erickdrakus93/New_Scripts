//
// Created by erick-hdz on 16/03/20.
//

#ifndef NEW_SCRIPTS_PERSON_H
#define NEW_SCRIPTS_PERSON_H

#include <Person.h>
#include <String.h>

class Person {
public:
    Person(char* n = '', int s =0, char* nat = "USA"):
    name(n), nationality(nat), sex(s){};
    void set_date_born(int m, int d, int y){
        date_born.Set_Date(m, d, y);
        // This is the call inside as we can see in the line trivially
    }
    void set_date_dead(int m, int d, int y){
        date_dead.Set_Date(m, d, y);
        // CALLING THE FUNC INSIDE
    }
    void Print_Name(void){
        std::cout << name;
        return;
    }
    void print_Nationality(void){
        std::cout << nationality;
    }
    void print_date_born(void){
        std::cout << date_born;
    }
    void print_date_dead(void){
        std::cout << date_dead;
    }

private:
    // This is the access in the access as we can see in the next lines in the code
    String name, nationality;
    Date date_born, date_dead;
    int sex;


};

// Here we can set a main in the type of int as we can type here

int main(void){
    Person math("Erick Hernandez Navarrete");
    math.set_date_born(4, 15, 96);
    math.set_date_dead(4,45,56);
    std::cout << "The math name of his theorem has the name for himself";
    math.Print_Name(); // call the print_name function //
    std::cout << "\nHe was born in :";
    math.print_date_born();
    std::cout << "And he died in:";
    math.print_date_dead();
    std::cout << "\n";

}


#endif //NEW_SCRIPTS_PERSON_H
