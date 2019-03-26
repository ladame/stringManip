/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <string>
#include <iostream>


int main ()
{
  uint8_t MAX_ALPHABET = 26;
  bool dbAlphabet[MAX_ALPHABET]{false};
  bool dbRepeated[MAX_ALPHABET]{false};
  std::string input;
  getline (std::cin, input);
  printf ("Repeated alphabet: ");
  //filter to check only string
  for (std::string::iterator it = input.begin (); it != input.end (); ++it)
    {
      if (islower (*it))
	  *it = toupper (*it);
      uint8_t iAlphabet = *it - 'A';
      if (dbAlphabet[iAlphabet])
	  {
	      //printf("dbRepeated[iAlphabet] ", dbRepeated[iAlphabet], "");
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
  return 0;
}
