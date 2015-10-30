#include <iostream>
#include<string>


  std::string transformChar(char w)
  /*
transformChar takes an input alphanumeric character and returns 
either the number printed out or the uppercase of a lower case 
character. Other characters are ignored. 
   */
  {
    std::string ass;
      if (isalnum(w))
	{
	  
	  switch (w)
	    {
	    case '0':
	      ass =  "ZERO";
	      break;
	    case '1':
	      ass =  "ONE";
	      break;
	    case '2':
	      ass =  "TWO";
	      break;
	    case '3':
	      ass = "THREE";
	      break;
	    case '4': 
	      ass = "FOUR";
	      break;
	    case '5':
	      ass = "FIVE";
	      break;
	    case '6':
	      ass = "SIX";
	      break;
	    case '7':
	      ass = "SEVEN";
	      break;
	    case '8':
	      ass = "EIGHT";
	      break;
	    case '9':
	      ass = "NINE";
	      break;
	      
	    }
	  if (isalpha(w))
	    {
	    // Change to upper case
	    char intStr = toupper(w);
	    // Output that character
	    ass =intStr;
	    }
	 
	   
	}
       return ass;
  }





int main(int argc,char* argv[])
  
{
  bool helpBool {false};
  float versionNumber{4.5};
  bool versionBool {false};
  
  for (int a=0; a< argc; a++)
    {
      std::string tempString = argv[a];
	
      //   std::cout << tempString<<std::endl;

      if ((tempString=="--help")||(tempString=="-h"))
	{
	  helpBool=true;
	}
      
      if (tempString=="-o")
	{
	  std::cout<< argv[a+1]<<std::endl;
	}

      if (tempString=="-i")
	{
	  std::cout<< argv[a+1]<<std::endl;
	}

      if ((tempString=="--version")||(tempString=="-v"))
	{
	  versionBool=true;
	}

    }
  if (versionBool==true)
    {
      std::cout<<"Version number is: "<< versionNumber<<std::endl;
    }  
      
  if (helpBool==true)
    {
      std::cout<< "Here to help"<<std::endl;
    }

  
 
 

  
         
  
  std::string thing;
  char in_char{'x'};
  
  while (std::cin>> in_char)
    {
      thing = thing + transformChar(in_char);

    }

  std::cout << thing;
  return 0;
}
