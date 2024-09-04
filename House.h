#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"
#include "Fridge.h" 
#include "TV.h" 

class House : public Appliance {
    private:
        Appliance **appliances; 
        int numAppliances,currentNumAppliances; 
    public:
    House();
    House(int numAppliances); 
    bool addAppliance(Appliance* appliance); 
    double getTotalPowerConsumption(); 
    
};



#endif