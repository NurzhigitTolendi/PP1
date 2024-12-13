#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // creating phone book
    map<string, string> phoneBook;

    // inserting elements 
    phoneBook["Alice"] = "+123456789";
    phoneBook["Bob"] = "+987654321";
    phoneBook["Charlie"] = "+111222333";

    // 1. iteration on maps
    cout << "Phone book contents:" << endl;
    for (map<string, string>::iterator it = phoneBook.begin(); it != phoneBook.end(); ++it) {
        cout << "Name: " << it->first << ", Number: " << it->second << endl;
    }
    cout << endl;

    // 2. searching elements on map
    string nameToFind = "Bob";
    map<string, string>::iterator it = phoneBook.find(nameToFind);
    if (it != phoneBook.end()) {
        cout << "Found " << it->first << ": " << it->second << endl;
    } else {
        cout << nameToFind << " not found in phone book!" << endl;
    }
    cout << endl;

    // 3. deleting elements on map
    string nameToRemove = "Charlie"; 
    size_t removed = phoneBook.erase(nameToRemove); // deleting by key
    if (removed) {
        cout << nameToRemove << " removed from phone book." << endl;
    } else {
        cout << nameToRemove << " not found in phone book." << endl;
    }
    cout << endl;

    // 4. Key check
    string nameToCheck = "Alice";
    if (phoneBook.count(nameToCheck) > 0) { // count() returns 1 if key exists
        cout << nameToCheck << " exists in phone book." << endl;
    } else {
        cout << nameToCheck << " not found in phone book." << endl;
    }
    cout << endl;

    // 5. size of the map
    cout << "Phone book size: " << phoneBook.size() << endl;
    cout << endl;

    // 6. clearring map
    phoneBook.clear();
    cout << "Phone book cleared." << endl;
    cout << "Phone book size after clearing: " << phoneBook.size() << endl;

    return 0;
}
