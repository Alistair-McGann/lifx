#include <iostream>
#include "LifxData.cc"

int main () {
    lifxdata::LifxData lifxData(1, 2);
    std::cout << lifxData.Add() << std::endl;
}
    
