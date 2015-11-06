#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP
#include <iostream>
#include <string>

/**
 *CaesarCipherClass takes a key
 *The key is used to shift that number along the alphabet
 */
class CaesarCipherClass{

public:

  /**
   *Begin the en/decryption process
   *\param key The key used to en/decrypt the input 
   */
  CaesarCipherClass(long key);

  /// \return The final de/encrypted code  
  std::string caesarCipher(bool decrypt, std::string& code);
  /// Some things can be private which do not need to be outputed
private:
  /// The key is stored as private as it does not need to be known 
  long key_ = 5;
};






#endif // MPAGSCIPHER_CAESARCIPHER_HPP

