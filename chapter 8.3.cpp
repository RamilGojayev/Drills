#include "std_lib_facilities.h"

namespace X {
    int var{ 0 };
    void print() { cout << "X::var == " << var << endl; }
} 

namespace Y {
    int var{ 0 };
    void print() { cout << "Y::var ==  " << var << endl; }
} 

namespace Z
{
    int var{ 0 };
    void print() { cout << "Z::var == " << var << endl; }
} 

int main()
{
    X::var = 14;
    X::print();    
    using namespace Y;
    var = 18;
    print();       
    {
        using Z::var;
        using Z::print;
        var = 22;
        print();    
    }
    print();        
    X::print();    
}