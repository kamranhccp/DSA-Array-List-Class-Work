#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

#include <string>
#include <iostream>
#include <sstream>

using namespace std;


class ArrayList {

    public:
        //~Constructors-----------------------------------------------
        ArrayList();
        //~Methods---------------------------------------------------
        void add(int element);
        void add(int element, int index);
        int remove(int index);
        void removeAll();
      
        int get(int index) { return array[index];}
		
    
	    int getSize() const {return size;}
        int getCapacity() const;
        std::string toString() const;
        
    private:
       int array[20];
       int size;
       int capacity;
        
        
      
};

ArrayList::ArrayList() {

    capacity = 20;
    size = 0;
}



void ArrayList::add(int element) {

    if (size  == capacity) {
		cout<<"\nList is Full, Can Not Add further elements";
        
    }
	else
	{
		array[size] = element;
    	size++;
	}
    
}


void ArrayList::add(int element, int index) {

    if (index >= 0 && index <= size) {

       
        for (int i = size; i > index; i--) {

            array[i] = array[i - 1];
        }

        array[index] = element;
        size++;

       
    }
}



int ArrayList::remove(int index) {


    int removed = -1;

removed = (index >= 0 && index < size) ? (array[index]) : -1;

    if (index < size && index >= 0) {
    	
       
        for (int i = index; i < size; i++) {

            array[i] = array[i + 1];
        }
		
        size--;
    }

   return removed;
}

void ArrayList::removeAll() {


    for(int i=0; i<size; i++)
    	array[i] = -1;
    size = 0;
}


std::string ArrayList::toString() const {

    std::ostringstream streamOut;

    streamOut << "(";

    for (int i = 0; i < size; i++) {

        streamOut << array[i];

        if (i != (size - 1)) {

            streamOut << ", ";
        }
    }

    streamOut << ")\n";

    std::string returnString = streamOut.str();

    return returnString;
}

#endif /* ARRAYLIST_H_ */