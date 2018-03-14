//
//  main.cpp
//  bloomFilter
//
//  Created by Sara Topic on 13/03/2018.
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

const int SIZE=20;

int hash_string(const char * s)
{

    return (atoi(s) % SIZE);
}

int main(int argc, const char * argv[]) {
    // empty bloom fliter of size 20
    std::bitset<SIZE> bloomFilter;
    for(int i = 0; i < bloomFilter.size(); i++) {
        std::cout << bloomFilter[i];
    }
    int retVal = hash_string("bloom filter");
    printf("\[%d]\n", retVal);
    return 0;
}
