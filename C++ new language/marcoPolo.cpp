#include <iostream>
#include <cassert>

using namespace std;

class Polo
{
public:
    string polo()
    {
        return "Polo!";
    }
};

class Marco
{
private:
    Polo poloInstance; 
public: 
    Marco(Polo p) : poloInstance(p) {}

    string marco()
    {
        return "Marco! " + poloInstance.polo();
    }


};

int main()
{
    Polo p;
    Marco m = Marco(p);

    assert(m.marco() == "Marco! Polo!");
    cout << m.marco() << endl;

    return 0;
}
