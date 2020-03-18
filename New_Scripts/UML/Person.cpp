//
// Created by erick-hdz on 16/03/20.
//

#include "Person.h"
#include <String.h>
#include <Date.h


class Person {
public:
    Person(char *n = '', bool s = true, char *nat = 'USA') : name(n), sex(s), nat(nationality) {};
    // The last is the setting the name //
    void set_date_born(int m, int d, int y) {
        date_born.Set_Date(m, d,y); // calling the subroutine as we can see in the nex lines //
    }
    void Print_name(void) {
        std::cout << name;
        return;
    }
    void Print_Nationality(void) {
        std::cout << nationality;
        return;
    }
    void Print_Date_born(void) {
        std::cout << date_born;
        return;
    }
    void Print_Date_Dead(void) {
        std::cout << date_dead;
        return;
    }
    void set_sex(bool bi){
        sex = bi;
        return;
    }
}
private:
    String name, nationality;
    Date date_born, date_dead;
    bool sex; // Here we can put sex as int input //
};


int main(void){
    Person math("Erick Hernandez Navarrete");
    math.set_date_dead(4,45,55465);
    math.set_date_born(4,55,9999);
    math.set_sex(Hombre);
    std::cout << "The name is the next:";
    math.Print_Name();
    std::cout << "\t"
    std::cout << "He born in:";
    math.Print_Date_born();
    std::cout << "\t"
    std::cout << "And he died in";
    math.Print_Date_Dead();
    std::cout << "\t";

}