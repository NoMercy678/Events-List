#ifndef COLLECTION_H
#define COLLECTION_H
#include <vector>
#include "event.h"

class collection
{
    protected:
        vector<EVENT> eventList;

    public:
        collection();



        void addEvent(EVENT userEvent);
        void printList();










};








#endif