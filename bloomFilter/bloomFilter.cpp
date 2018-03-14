//
//  bloomFilter.cpp
//  
//
//  Created by Sara Topic on 13/03/2018.
//
#include <iostream>
#include "bloomFilter.hpp"


int main()
{
    std::bitset<20> bloomFilter;
    for(int i = 0; i < bloomFilter.size(); i++) {
        std::cout << bloomFilter[i];
    }
    return 0;
}


