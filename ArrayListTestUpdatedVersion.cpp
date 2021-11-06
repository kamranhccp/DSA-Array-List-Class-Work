#include "ArrayListTestUpdatedVersion.h"
#include <iostream>

using namespace std;

int main(void) {
  
    ArrayList myList;

    cout << "Adding 20 integers to List.\n\n";
    
    int x = 99;
    
    myList.add(x);
    myList.add(184);
    myList.add(14);
    myList.add(147);
    myList.add(10);
    myList.add(-37);
    myList.add(584);
    myList.add(-2147);
    myList.add(0);
    myList.add(-75);
    myList.add(880);
    myList.add(12);
    myList.add(13);
    myList.add(14);
    myList.add(15);
    myList.add(16);
    myList.add(17);
    myList.add(18);
    myList.add(19);
    myList.add(20);
  // Overflow List by adding 21st element
  //  myList.add(21);
  
    
    
    cout << "\nPrinting added members.\n";
    cout << "The size of the list is: " << myList.getSize() << endl;
    cout << myList.toString() << endl;

    cout << "Getting element at 0\n";
    cout << "The element at 0 is: " << myList.get(0) << endl << endl;

    cout << "Getting element at " << myList.getSize() - 1 << endl;
    cout << "The element at " << myList.getSize() - 1
            << " is: " << myList.get(myList.getSize() - 1) << endl << endl;

    cout << "Removing index 0\n";
    cout<<"\nThe element removed is "<<myList.remove(0);
    
    cout << "\nThe size of the list is: " << myList.getSize() << endl;
    cout << myList.toString() << endl;

    cout << "Removing index 5\n";
    cout<<"\nThe element removed is "<<myList.remove(5);
    cout << "\nThe size of the list is: " << myList.getSize() << endl;
    cout << myList.toString() << endl;

    cout << "Adding 666 to index 7\n";
    myList.add(666, 7);
    cout << "The list now contains:\n" << myList.toString() << endl;
	
	cout<<"\nRemoving all the elements from List\n";
	myList.removeAll();
	cout << "The list now contains:\n" << myList.toString() << endl;
   

    return 0;
}
