#include "std_lib_facilities.h"

void swap_v(int z, int y)
{
    int temp;
    temp = z;
    z = y;
    y = temp;
}

void swap_r(int& z, int& y)
{
    int temp;
    temp = z;
    z = y;
    y = temp;
}


int main()
{
    
    return 0;
}