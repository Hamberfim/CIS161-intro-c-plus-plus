#include <iostream>
using namespace std;

class Vehicle {
    //private class variables
    private:
        string brand;
        int price;
     
    public:
        //Constructor Statements to create different versions of a vehicle based on user inputs
        Vehicle() : brand("unknown"), price(0) {}
        Vehicle(string vBrand) : brand(vBrand), price(0) {}
        Vehicle(int vPrice) : brand("unknown"), price(vPrice) {}
        Vehicle(string vBrand, int vPrice) : brand(vBrand), price(vPrice) {}
        
        //Getter functions to get vehicle brand and price
        string getVehicleBrand() {
            return brand;
        }
        int getVehiclePrice() {
            return price;
        }
        //Setter functions to set vehicle brand and price
        void setVehicalBrand(string inputBrand) {
            brand = inputBrand;
        }
        void setVehicalPrice(int inputPrice) {
            price = inputPrice;
        }

};

class Coupe:public Vehicle
{

    private:
        string roofType;
        
    public:
        //Constructor Statements to create different versions of a coupe based on user inputs
        Coupe(): Vehicle("unknown", 0), roofType("unknown") {} //no user inputs
        Coupe(int cPrice, string cRoofType): Vehicle("unknown", cPrice), roofType(cRoofType) {} //price and roof inputs, no brand
        Coupe(string cBrand, string cRoofType): Vehicle(cBrand, 0), roofType(cRoofType) {} //brand and roof inputs, no price
        Coupe(string cBrand, int cPrice, string cRoofType): Vehicle(cBrand, cPrice), roofType(cRoofType) {} //all inputs
        
        //Getter function to get roof type
        string getRoofType() {
            return roofType;
        }
        
        //Setter function to set roof type
        void setRoofType(string inputRoofType) {
            roofType = inputRoofType;
        }
};

int main()
{
   //Create an instance of a coupe (coupe object)
    Coupe myCoupe;
    
    //Get default coupe brand, price, roof type if no inputs are provided
    cout << "Coupe Brand: "<<myCoupe.getVehicleBrand() << endl;
    cout << "Coupe Price: "<< myCoupe.getVehiclePrice() << endl;
    cout << "Coupe Roof Type: "<<myCoupe.getRoofType() << endl;
}