#include "../header/collection.h"
#include <iostream>
#include <fstream>

collection::collection()
{   

    
    eventList;


}

void collection::addEvent(EVENT userEvent)
{
    eventList.push_back(userEvent);
}

const void collection::printList()
{
    unsigned int vectorSize= eventList.size();
        for(unsigned int t = 0; t < vectorSize;t++)
        {
            std::cout<<"Event Name: " << eventList.at(t).get_name()<<"\n";
            std::cout<<"Date: "<<eventList.at(t).get_date()<<"\n";
            std::cout<<"Time: "<<eventList.at(t).get_time()<<"\n";
            std::cout<<"Location: "<<eventList.at(t).get_location()<<"\n";
            std::cout<<"Purpose: "<<eventList.at(t).get_purpose()<<"\n";
            std::cout<<"\n";
        }



}

const void collection::ListToHTML()
{
    fstream userFile;
    userFile.open("html.txt",fstream::app);
    

    unsigned int vectorSize= eventList.size();
        for(unsigned int t = 0; t < vectorSize;t++)
        {
            userFile<<"<p>Event Name: " << eventList.at(t).get_name()<<"<p>\n";
            userFile<<"<p>Date: "<<eventList.at(t).get_date()<<"<p>\n";
            userFile<<"<p>Time: "<<eventList.at(t).get_time()<<"<p>\n";
            userFile<<"<p>Location: "<<eventList.at(t).get_location()<<"<p>\n";
            userFile<<"<p>Purpose: "<<eventList.at(t).get_purpose()<<"<p>\n";
        
        }


    userFile.close();


}
