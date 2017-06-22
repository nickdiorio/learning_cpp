#include "toolbox.h"

int get_input(string request){
	int n = 0;
	cout << request;
	cin >> n;
	return n;
}

int get_int(string request){
	int n = 0;
	while ((cout << request << endl) && !(cin >> n)) {
		cout << "Value must be integer." << endl;
		cin.clear();
		cin.ignore(1000, '\n');
	}
	return n;
}

// >> operator returns left argument, cin, by convention
// compiler converts istream into boolean by calling a member function of istream
// this function returns a void* pointer, which is converted to a boolean
// if the pointer is non-NULL, the stream is in good state -> boolean is true
// if pointer is NULL, the stream is in failed state -> false
int get_int_nonneg(string request){
	int n = -1;
	while ((cout << request << endl) && !(cin >> n) || n < 0) {
		cout << "Value must be non-negative integer." << endl;
		cin.clear();
		// discards characters in input buffer until either max # of chars deleted, or newline encountered
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	return n;
}