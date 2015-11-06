#include <iostream>
#include <string>
#include "CaesarCipher.hpp"
CaesarCipherClass::CaesarCipherClass(const long key)
  : key_{key}
    {
    }

std::string CaesarCipherClass::caesarCipher(bool decrypt, std::string& code)

{
  char alphabet[26] {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  if(decrypt == true)
     {char alphabet_inverted[26] {'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
       for(short i=0; i<26;i++)
	 {alphabet[i] = alphabet_inverted[i];}
    }
 
  for (unsigned int i=0; i<code.size(); i++)
    {
      for (unsigned int j=0; j<26; j++)
	{
	  if (code[i] == alphabet[j])
	    {
	      code[i] = alphabet[(j+key_)%26];
	      break;
	    }
	}
    }
   return code;
}


