#include <iostream>



int main()
{
  //this is a comment!!! 
  /* This is a multiline comment*/
  std::cout<< "Hello World!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n";

  int a{4}, b{8}, c{0};
  a=++a;
  c = a*b;

  std:: cout << c << "\n"; 

  const double s{5.5012};

  std:: cout <<s <<"\n"; 

  std:: cout<< s*a << "\n";
  
  auto p{true};

  //std:: cout<<p<< "\n";

  std:: cout<< s/a <<"\n";

  std:: cout<< a/b<<"\n";

}
