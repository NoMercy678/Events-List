#include "../header/event.h"

 EVENT::EVENT(string userDate,string userTime,string userLocation,string userPurpose, string eventName)
 {
    set_name(eventName);
    set_date(userDate);
    set_location(userLocation);
    set_time(userTime);
    set_purpose(userPurpose);

 }

    const string EVENT::get_name(){return this->eventName;}
    const string EVENT::get_date(){return this->date;}
    const string EVENT::get_time(){return this->time;}
    const string EVENT::get_location(){return this->location;}
    const string EVENT::get_purpose(){return this->purpose;}

    void EVENT::set_name(string eventName){this->eventName = eventName;}
    void EVENT::set_date(string userDate){this->date = userDate;}
    void EVENT::set_time(string userTime){this->time = userTime;}
    void EVENT::set_location(string userLocation){this->location = userLocation;}
    void EVENT::set_purpose(string userPurpose){this->purpose = userPurpose;}
