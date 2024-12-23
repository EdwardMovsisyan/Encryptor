#ifndef ENCRYPT_HPP
#define ENCRYPT_HPP

// Libraries
#include <iostream>
#include <string>

// Creating class EncryptAndDecrypt
class EncryptAndDecrypt
{
    public:
	std::string Encrypt (std::string a,int key)
	{
	    for (int i = 0; i < a.size(); ++i)
	    {
		a[i] += key;
	    }
	    return a;
	}
	std::string Decrypt (std::string b,int key)
	{
	    for (int i = 0; i < b.size(); ++i)
	    {
		b[i] -= key;
	    }
	    return b;
	}
};

#endif // encrypt.hpp

