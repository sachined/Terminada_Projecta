#include "Item_Dictionary.h"

#include <vector>


// Display menu for Bank 
void showDisplayMenu(string name) {


	cout << "\nHi " << name << ", welcome back! How can I help you today?\n" << endl;

	cout << "Would you like to...\n\n\t1. Make a Deposit\n\t2. Make a Withdrawl\n\t3. Transfer\n\t4. Questions\n" << endl;

}

string DataToken::generateCache(size_t number, string resultCache)
{

	size_t i = 0;

	while (i < number) {
		resultCache.insert(i, resultCache.length() - number, genRandom());
		i++;
		number--;
	}
	return resultCache;
}

inline string DataToken::generateID()
{
	string IDMake = "";

	int i = 0;
	size_t max = cacheString.length();

	while (i < 4 && max > 0) {
		IDMake.push_back(cacheString[max - 1 - i]);
		i++;
	}
	return IDMake;
}

int main() {

	//void showDisplayMenu(string);
	string uName;
	typedef vector<int> User;
	cout << "Howdy Doo!\nLet me get your name partner! Please enter your name below\n" << endl;

	cin >> uName;

	showDisplayMenu(uName);

	DataToken customer = DataToken();

	customer.showData();

	return 0;
}

