#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string data(string name, string comment) {
	return name + " - " + comment;
}


int main() {
	string name, comment;


	cout << "Your name: ";
	getline(cin, name);
	cout << "Your comments: ";
	getline(cin, comment);

	ofstream comments;
	comments.open("comments.txt", ios_base::app);
	comments << data(name, comment) << "\n";
	comments.close();

	cout << "Comment saved succesfuly";



return 0;
}

