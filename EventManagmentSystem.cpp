// EventManagmentSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
//#include "Concert.cpp"
#include "Event.h"
#include "Concert.h"
#include "Conference.h"
#include <memory>
#include <string>
#include <fstream>
using namespace std;



void saveToFile(const vector<Concert>& event)
{
	ofstream ofs("CreatedEvents.txt");
	for ( auto& event : event){
		event.saveToFile(ofs);
}
ofs.close();
}
void loadFromFile(vector<Concert>& event)

{


	ifstream ifs("CreatedEvents.txt");
	if (!ifs)
	{
		return;
	}
	while (ifs.peek() != EOF)
	{
		Concert event;
		event.loadFromFile(ifs);
		if (ifs) {
			
			event.insert(event.end(), createEvent);
		}
		
	}
	ifs.close();
}
 void createEvent(vector<shared_ptr>Event>>& event)
{
	 

	//Concert createEvent;
	//string eventName;
	//int eventDate;
	//string location;

	//cout << " Creating an event! " << endl;

	////enter information 
	//cout << " Enter the name of the event. " << endl;
	//cin.ignore();
	//getline(cin, eventName);
	//createEvent.set_eventName(eventName);

	//cout << " Enter the date for the event.(integer only) " << endl;
	//cin >> eventDate;
	//createEvent.set_eventDate(eventDate);

	//cout << " Enter the location for the event. " << endl;
	//cin.ignore();
	//getline(cin, location);
	//createEvent.set_location(location);

	//event.push_back(createEvent);
	//cout << " created event" << endl;
	//saveToFile(event);

}
 void displayAll( const vector<Concert>& event)
 {
	 for ( const auto& event : event) {
		 event.displayAll();
	 }
 }

 int main()
 {

	 int input = 0;
	 vector < Concert > event;
	 loadFromFile(event);



	 do {
		 cout << " 1. Create Event " << endl;
		 cout << " 2. Display Events " << endl;
		
		 cout << " 3. exit " << endl;
		 cin >> input;
		

		 switch (input)

		 {
		 case 1:
			 createEvent(event);
			 break;
	
		 case 2:
			 displayAll(event)
				
			 break;
		
		 case 3:
			 saveToFile(event);
			 cout << "  see ya !" << endl;
	
			 	break;
		 default:
			 cout << " Thats Not an Option" << endl;
			 break;
			
			
		 }
	 } while (input != 3);
 };


