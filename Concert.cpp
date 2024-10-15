#pragma once
#include "Concert.h"
//#include "Event.h"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;




void Concert::set_eventName(string name)

{
	eventName = name;
}
void Concert::set_eventDate(int date)
{
	eventDate = date;
}

void Concert::set_location(string loc)
{
	location = loc;
}
string Concert::get_eventName() const {
	return eventName;
}
int Concert::get_eventDate() const {
	return eventDate;
}
string Concert::get_location() const{
	return location;
}

void Concert::saveToFile(ofstream& ofs) const
{
	ofs << eventName << endl;
	ofs << eventDate << endl;
	ofs << location << endl;
}
void Concert::loadFromFile(ifstream& ifs)
{
	
	getline(ifs, eventName);
	ifs >> eventDate;
	ifs.ignore();
	getline(ifs, location);
}

void Concert::displayAll()const 
{
	cout << "Event Name: " << eventName << endl;
	cout << "Event Date: " << eventDate << endl;
	cout << "Event Location: " << location << endl;

}
