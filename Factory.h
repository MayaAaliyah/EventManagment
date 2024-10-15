#pragma once
#include "Event.h"
#include "Concert.h"


class Factory :
    public Event
{
public:
    static shared_ptr<Event> createEvent(
        string& type,
        string& eName,
        string& eDate,
        string& eLocation,
        string& bandname,
        string& genre,
        const vector<string>& speakers = {},
        const  vector<string&> topics = {}
    )
    {
        if (type == "Concert")
        {
            return make_shared<Concert>(eName, eDate, eLocation);
        }
        if (type == "Conference")
        {
            return make_shared<Concert>(eName, eDate, eLocation);
        }
        if (type != "Concert" || "Conference")
        {
            cout << "*buzzer noise*";
        }
    }
};

class Strategy 
{
public: 
    virtual bool searches(Event& event) = 0;
};

class searchDate : public Strategy : public Event
{
    friend class Event;
private:
    string& edate;

public:
    searchDate(string& edate) : edate(edate) {}

    bool searches(Event& event) override
    {
        
        return event.eventDate == edate;
    }

};

class searchLocation : public Strategy
{
    friend class Event;
private: 
    string elocation;

public: 
    searchLocation(string& elocation) : elocation(elocation){}
    bool searches(Event& event) override
    {
        return event.location == elocation;
    }
};


