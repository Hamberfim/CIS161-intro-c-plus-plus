/* Define the Monday class's GetWeather() accessor that gets data member weather and the GetTemperature() accessor that gets data member temperature.

Ex: If the input is overcast 50.0, then the output is:

Monday: overcast
Temperature: 50.0 degrees Celsius */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Monday {
   public:
      void SetWeather(string mondayWeather);      
      void SetTemperature(double mondayTemperature);      
      string GetWeather() const;     
      double GetTemperature() const;        
   private:
      string weather;
      double temperature;
};

void Monday::SetWeather(string mondayWeather) {
   weather = mondayWeather;
}

void Monday::SetTemperature(double mondayTemperature) {
   temperature = mondayTemperature;
}

/* Your code goes here */
string Monday::GetWeather() const {
      return weather;
   }
   
double Monday::GetTemperature() const {
      return temperature;
   }

int main() {
   Monday weather;
   string inputWeather;
   double inputTemperature;

   cin >> inputWeather;
   cin >> inputTemperature;
   weather.SetWeather(inputWeather);
   weather.SetTemperature(inputTemperature);

   cout << "Monday: " << weather.GetWeather() << endl;
   cout << "Temperature: " << fixed << setprecision(1) << weather.GetTemperature() << " degrees Celsius" << endl;

   return 0;
}
