// Jwt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

#include "jwt/jwt.hpp"

int main()
{
	using namespace jwt::params;
	std::string encodedString = "eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiYWRtaW4iOnRydWUsImp0aSI6ImY4ZWQ0OTM2LTBlN2ItNDlmYi05YTkxLWM2MDQyZDEzODMzNiIsImlhdCI6MTU1NTUxODk4NSwiZXhwIjoxNTU1NTIyNTg1fQ.rsyE_KzLO99zKXC7TNFD1RkU6HYF2Y7XJuIkFKumt20";
	jwt::jwt_object decoded = jwt::decode(
		encodedString,
		algorithms({ "hs256" }),
		false
	);
	std::cout << decoded.header();
	std::cout << decoded.payload();
	return 0;
}
