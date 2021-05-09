#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H
#include "PersonData.h"
#include <string>
using namespace std;

class CustomerData : public PersonData {
    protected:
        int customerNumber;
        bool mailingList;
    public:
        CustomerData() : PersonData() {
            customerNumber = 0;
            mailingList = false;
        }

        // Mutator function
        void setCustomerNumber() {
            customerNumber = rand();
        }

        void setMailingList(bool m) {
            mailingList = m;
        }

        // Accessor function
        int getCustomerNumber() {
            return customerNumber;
        }

        bool getMailingList() {
            return mailingList;
        }
};

#endif