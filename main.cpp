
// Libraries
#include <iostream>
#include "encrypt.hpp"

int main ()
{
    while (true)
    {
	// Init
	int key = 0;
	std::string word = "";
	EncryptAndDecrypt *E1 = new EncryptAndDecrypt ();

	// Print 
	std::cout << "write key please ` ";
	std::cin >> key;
	std::cout << "type word which you want encrypt and decrypt  ` ";
	std::cin >> word;
	std::cout << "the  original text is ` " << word << std::endl;

	// Encryption
	std::string a = E1 -> Encrypt (word,key);
	std::cout << "the encrypted word is ` " << a << std::endl;
	// Decryption
	std::string c = E1 -> Decrypt (a,key);
	std::cout << "the decrypted word is ` " << c << std::endl;

	delete E1;
    }
    return 0;
}
