#pragma once

#include <iostream>
#include <ctime>
#include <string>
#include <iostream>

using namespace std;

// Random Generation bit for DataToken class funtion genRandom()
static const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrsrtuvwxyz";
int len = sizeof(alphanum) - 1;

char genRandom() {

	char result{};
	result = alphanum[rand() % len];
	
	char Tresult = result < 0 ? (result * -1) : result;

	return Tresult;

}
// =====

class User {};

class DataToken {

	string name;
	string cacheString;
	string ID;

	string retrieveName();
	string retrieveCache();
	string retrieveID();


	string generateCache(size_t number, string);
	string generateID();

	void setName(string enter_name);

public:

	void showData();
	
	DataToken();
	DataToken(string name);

	~DataToken();

};

DataToken::DataToken() {

	setName("STANDARD");
	cacheString = generateCache(4, "appl");
	ID = generateID();

	showData();
	 
}

DataToken::DataToken(string name)
{
	setName(name);
	cacheString = generateCache(4, "appl");
	ID = generateID();

	showData();
}

inline string DataToken::retrieveName()
{
	return name;
}

inline string DataToken::retrieveCache()
{
	return cacheString;
}

inline string DataToken::retrieveID()
{
	return ID;
}



inline void DataToken::setName(string enter_name)
{
	name = enter_name;
}

inline void DataToken::showData()
{
	cout << "Here are the sensitive details of the Data Token:\n\tID - : " << retrieveID() << "\n\tCache String: " << retrieveCache() << "\n\tMember Name: " << retrieveName() << endl;
}

inline DataToken::~DataToken()
{
	cout << "Let's close this account token today!~" << endl;
}
