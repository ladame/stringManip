#pragma once

#include <stdio.h>
#include <vector>
#include <stdint.h>
#include <iostream>

class CheckSumNumber
{
    public:
    
    int8_t checkInside()
    {
        //Check one by one
        for(auto it = listNumber.begin() ; it != listNumber.end() ; ++it)
        {
            // check for the last element to avoid out_of_range
            if(*it != listNumber.back())
            {
                for(checker=0; checker<listNumber.size(); ++checker)
                {
                    if( (*it+*(it+checker+1) == addNumber))
                    {
                        std::cout << "Find it ! \n";
                        return 0;
                    }
                }
            }
        }
        std::cout << "Not find ! \n";
    }
    

    private: 
        std::vector<int> listNumber{10,15,3,9,2};
        int addNumber{17};
        int8_t checker{0};
};
