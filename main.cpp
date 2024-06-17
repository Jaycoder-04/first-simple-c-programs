#include <iostream>
#include <string>
#include<cctype>
#include <cstring>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
string lengthTest( char password[])
{
	if(strlen(password) >= 8 && strlen(password) <= 13 )
	return "Passed";
	else
	return "Failed";
}
string upperCaseTest(const char* password)
{
	while(*password)
	{
		if(isupper(*password))
		return "Passed";
	++password;
	}
	return "Failed";
}
string characterTest(const char* password)
{
	while(*password)
	{
		if(*password == '!' || *password == '@' || *password == '#' || *password == '$'
		|| *password == '%' || *password == '^' || *password == '&'
		|| *password == '*' || *password == '(' || *password == ')'
		|| *password == '_' || *password == '-' || *password == '='
		|| *password == '+' || *password == '`' || *password == '~'
		|| *password == '{' || *password == '}' || *password == '['
		|| *password == ']' || *password == ':' || *password == ';'
		|| *password == '"' || *password == ',' || *password == '<'
		|| *password == '>' || *password == '.' || *password == '/'
		|| *password == '|' || *password == '\\')
		return "Passed";
	++password;
	}
	return "Failed";
}
string numberTest(const char* password)
{
	while(*password)
	{
		if(isdigit(*password))
		return "Passed";
	++password;
	}
	return "Failed";
}
int main(int argc, char** argv) {
	char password[13];
	while(true)
	{
		cout << "Enter a password : ";
		cin.getline(password, 13);
			cout << "Length is between 8 and 13 characters : " << lengthTest(password) << endl;
		 	cout << "Has at Least Upper case character : " <<  upperCaseTest(password) << endl;
		 	cout << "Has at Least Special character : " <<  characterTest(password) << endl;
		 	cout << "Has at Least a Number : " <<  numberTest(password) << endl;
		if(lengthTest(password) == "Passed" && upperCaseTest(password) == "Passed" && characterTest(password) == "Passed" && numberTest(password) == "Passed" )
		{
			cout << "========================Congradulations your Password is Strong================================= " << endl;
			break;
		}
		cout << "========================!!!Oops your Password is Weak================================= " << endl;
	}
			
	
	system("Pause");
	return 0;
}