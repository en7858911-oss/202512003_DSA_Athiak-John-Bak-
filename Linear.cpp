#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    
    cout << "Enter number of family members: ";
    cin >> n;

    string names[n], key;
    int ages[n];

    // Input names and ages
    for(int i = 0; i < n; i++) {
        cout << "Enter name of member " << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter age of " << names[i] << ": ";
        cin >> ages[i];
    }

    // Search key
    cout << "Enter name to search: ";
    cin >> key;

    bool found = false;

    // Linear Search
    for(int i = 0; i < n; i++) {
        if(names[i] == key) {
            cout << key << " was found and is aged " 
                 << ages[i] << " years." << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Not found" << endl;
    }

    return 0;
}