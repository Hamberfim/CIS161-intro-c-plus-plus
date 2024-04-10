/* The SetGreeting() mutator sets data member greeting to "Hi, you have reached ", followed by messageGreeting, and the SetAreaCode() mutator sets data member areaCode to messageAreaCode. In main(), call SetGreeting() and SetAreaCode(), passing arguments inputGreeting and inputAreaCode, respectively.

Ex: If the input is Mia 473, then the output is:

Voicemail: Hi, you have reached Mia at area code 473 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Message {
   public:
      void SetGreeting(string messageGreeting); 
      void SetAreaCode(int messageAreaCode);      
      string GetGreeting() const;                        
      int GetAreaCode() const;                        
      void Print() const;              
   private:
      string greeting;
      int areaCode;
};

void Message::SetGreeting(string messageGreeting) {
   greeting = "Hi, you have reached " + messageGreeting;
}

void Message::SetAreaCode(int messageAreaCode) {
   areaCode = messageAreaCode;
}

string Message::GetGreeting() const {
   return greeting;
}

int Message::GetAreaCode() const {
   return areaCode;
}

int main() {
   Message voicemail;
   string inputGreeting;
   int inputAreaCode;

   cin >> inputGreeting;
   cin >> inputAreaCode;
   
   /* Your code goes here */
   voicemail.SetGreeting(inputGreeting);
   voicemail.SetAreaCode(inputAreaCode);
 
   cout << "Voicemail: " << voicemail.GetGreeting();
   cout << " at area code " << voicemail.GetAreaCode() << endl;

   return 0;
}
