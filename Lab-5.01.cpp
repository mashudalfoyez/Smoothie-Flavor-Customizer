
// Header for input and output
#include <iostream>
using namespace std;

// Function for printDisplayMenu and using do-while loop
void printDisplayMenu(int &option) {
	do {
		cout << "Enter Smoothie Flavor: " << endl;
		cout << "\t1. Change the flavor" << endl;
		cout << "\t2. Adjust the quantity up by one" << endl;
		cout << "\t3. Adjust the quantity down by one" << endl;
		cout << "\t4. Make your Smoothie Large" << endl;
		cout << "\t5. Add Protein Powder" << endl;
		cout << "\t6. Exit" << endl;
		cout << "Please Enter your Choice(1-6): ";
		cin >> option;

		if (option < 1 || option > 6) {
			cout << "Invalid choice. Please try again.\n" <<endl;
		}
	} while  (option < 1 || option > 6);
}
// Main function
int main() {
	//welcome text
	cout << "			===================================================" << endl;
	cout << "			=	WELCOME TO MASHUD'S SMOOTHIE SHOP	  =" << endl;
	cout << "			===================================================" << endl;

	// Declaration and initialization
	string flavor = "Raspberry";
	int qty = 1;
	char size = 'S';
	bool addProtein = false;
	int option;

	// using do while loop with switch case statement
	do {
		cout << "Current Selection " << flavor;
		cout << ", Qty: " << qty;
		cout << ", Size: " << size;
		cout << ", Add Protein: " << addProtein << endl << endl;
		printDisplayMenu(option);
		cout << "You selected option: " << option << endl;
		cout << endl;

		// Process the user's choice using a switch statement
		switch (option) {
		case 1:
			cout << "Enter a new flavor: ";
			cin >> flavor;
			break;
		case 2:
			qty++;
			break;
		case 3:
			if (qty > 1) 
				qty--;
			break;
		case 4:
			size = 'L';
			break;
		case 5:
			addProtein = !addProtein;
			break;
		case 6:
			// Exit and Final output message
			cout << "Thank you for your order: " <<endl;
			cout << "Flavor: " << flavor;
			cout << ", Qty: " << qty;
			cout << ", Size: " << size;
			cout << ", Add Protein: " << addProtein << endl;
			break;
		default:
			// If the user entered the grater than 6 input
			cout << "Invalid Entry. Try again." <<endl;
		}
	} while (option != 6);// loop will stay until users liked to exit

	return 0;
}