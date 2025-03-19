

#include <iostream>
#include <array>
#include <tuple>


using namespace std;

class PointOfSale {
private:
    array<tuple<string, string, int>, 6> inventory;
   

public:
    PointOfSale() {
        tuple<string, string, int> cucumber = make_tuple("cucumber", "00295", 15);
        inventory.at(0) = cucumber;

        tuple<string, string, int> Apple = make_tuple("Granny Smith Apple", "10342", 50);
        inventory.at(1) = Apple;

        tuple<string, string, int> Banana = make_tuple("Banana", "10557", 45);
        inventory.at(2) = Banana;

        tuple<string, string, int> Apricot = make_tuple("Apricot", "11221", 90);
        inventory.at(3) = Apricot;

        tuple<string, string, int> Peach = make_tuple("Peach", "12151", 75);
        inventory.at(4) = Peach;

        tuple<string, string, int> Celery = make_tuple("Celery", "12157", 80);
        inventory.at(5) = Celery;


    }



    void addCode(string code) {
        
    }
    
};

int main()
{
    std::cout << "Hello World!\n";
}


