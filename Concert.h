#pragma once

//attributes bandName, genre 
//method override getDetails();
#include <string>
#include <fstream>
#include <iostream>
#include "Event.h"
using namespace std;

//#include "Event.h"
class Concert	
{
//private: 
//	string bandname;
//	string genre;
//
public:
//
//	Concert(string& eName,
//	string& eDate,
//		string& eLocation,
//		string& band,
//		string& genre) : Event(eName, eDate, eLocation), bandname(band), genre(genre){}
//
//	void getDetails()override
//	{
//		 Event::getDetails();
//		cout << "Band: " << bandname << endl;
//		cout << "Genre: " << genre << endl;
//	}
		
	string eventName;
	string eventDate;
	string location;


	void creatEvent();

	void set_eventName(string name);
	string get_eventName()const;

	void set_eventDate(string Date);
	string get_eventDate()const;

	void set_location(string loc);
	string get_location()const;



	void saveToFile(ofstream& ofs) const;
	void loadFromFile(ifstream& ifs);
	void displayAll() const;
	//void search() const;
};



