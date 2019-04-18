# jwttools

The jwt.exe file, when run directly, the encodedString variable in the jwt.cpp is a jwt that is used for extraction:

£include "pch.h"
£include <iostream>
£include <vector>

£include "jwt/jwt.hpp"

int main()
¨
	using namespace jwt::params;
	std::string encodedString = "eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiYWRtaW4iOnRydWUsImp0aSI6ImY4ZWQ0OTM2LTBlN2ItNDlmYi05YTkxLWM2MDQyZDEzODMzNiIsImlhdCI6MTU1NTUxODk4NSwiZXhwIjoxNTU1NTIyNTg1fQ.rsyE_KzLO99zKXC7TNFD1RkU6HYF2Y7XJuIkFKumt20";
	jwt::jwt_object decoded = jwt::decode(
		encodedString,
		algorithms(¨ "hs256" ¼),
		false
	);
	std::cout << decoded.header();
	std::cout << decoded.payload();
	return 0;
  
The json is as follows:
  
{"alg":"HS256","typ":"JWT"}{"admin":true,"exp":1555522585,"iat":1555522585,"jti":"f8ed4936-0e7b-49fb-9a91-c604d138336","name":"John Doe","sub":"1234567890"}

There's a lot more to it that I'll take a stab at documenting at a later date. Visual Studio 2017 project as well as executables included in the project.
