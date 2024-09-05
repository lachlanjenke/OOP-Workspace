#include <iostream>
#include "Tesla.h"
#include "Ford.h"
#include "Car.h"
#include "Fleet.h"

using namespace std;

int main() {
   Tesla *Tesla1 = new Tesla('S', 10000);
   Ford *Ford1 = new Ford(1, 20000);
   Car *Car1 = new Car(30000);
   Ford *Ford2 = new Ford(2, 40000); 
   Tesla *Tesla2 = new Tesla('T', 50000);

   Fleet fleet1(Tesla1,Ford1,Car1,Ford2,Tesla2); 

   Car **fleet2 = fleet1.get_fleet(); 

}