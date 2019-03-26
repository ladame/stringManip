#include "RepeatAlphabet.hpp"
#include <iterator>

RepeatAlphabet::RepeatAlphabet(){
  
    getline (std::cin, input);
    printf ("Repeated alphabet ");
  
}

void RepeatAlphabet::RepeatedAlphabet(){
    //printf("on %s : ", input.c_str()); -- not safe type, it doesn't check the input and show anything on stack
    std::cout << input << ": ";
    CheckAlphabet();
    PrintAlphabet();
    
}

void RepeatAlphabet::CheckAlphabet()
{
    for(std::string::iterator it = input.begin(); it != input.end() ; ++it){
        if(not dbAlphabet.insert(std::pair<char,int>(*it,1)).second)
        {
           dbAlphabet[*it] = dbAlphabet[*it] +1;
        }else
        {
            dbAlphabet.insert(std::pair<char,int>(*it,1));
        }
    }
}

void RepeatAlphabet::PrintAlphabet()
{
    for(auto const& character:dbAlphabet)
    {
        if(character.second > 1)
        {
           std::cout << character.first << " for " << character.second << " times \n"; 
        }
        
    }
}
/*
void RepeatAlphabet::CheckAlphabet(){
     //filter to check only string
  for (std::string::iterator it = input.begin (); it != input.end (); ++it)
    {
      if (islower (*it))
	  *it = toupper (*it);
      uint8_t iAlphabet = *it - 'A';
      if (dbAlphabet[iAlphabet])
	  {
	      if(not dbRepeated[iAlphabet])
	      {
	          printf ("%c ", *it);
	          dbRepeated[iAlphabet]=true;
	      }
	  }
      else
	  {
	      dbAlphabet[iAlphabet] = true;
	  }
    }
}*/