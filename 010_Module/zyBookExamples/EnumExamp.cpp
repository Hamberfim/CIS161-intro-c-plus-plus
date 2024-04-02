/* 10.1 Enumerations
Some variables only need to store a small set of named values. For example, a variable representing a traffic light need only store values named GREEN, YELLOW, or RED. An enumeration type (enum) declares a name for a new type and possible values for that type.

Construct 10.1.1: Enumeration type.
enum identifier {enumerator1, enumerator2,  ...};


The items within the braces ("enumerators") are integer constants automatically assigned an integer value, with the first item being 0, the second 1, and so on. An enumeration declares a new data type that can be used like the built-in types int, char, etc.

The program declares a new enumeration type named LightState. The program then declares a new variable lightVal of that type. The loop updates lightVal based on the user's input.

The example illustrates the idea of a state machine that is sometimes used in programs, especially programs that interact with physical objects, wherein the program moves among particular situations ("states") depending on input; see What is: State machine.

Because different enumerated types might use some of the same names, e.g., enum Colors {RED, PURPLE, BLUE, GREEN}; might also appear in the same program, the program above follows the practice of prepending a distinguishing prefix, in this case "LS" (for Light State).

One might ask why the light variable wasn't simply declared as a string, and then compared with strings "GREEN", "RED", and "YELLOW". Enumerations are safer. If using a string, an assignment like light = "ORANGE" would not yield a compiler error, even though ORANGE is not a valid light color. Likewise, light == "YELOW" would not yield a compiler error, even though YELLOW is misspelled.

One could instead declare constant strings like const string LS_GREEN = "GREEN"; or even integer values like const int LS_GREEN = 0; and then use those constants in the code, but an enumeration is clearer, requires less code, and is less prone to error.

Note: Each enumerator by default is assigned an integer value of 0, 1, 2, etc. However, a programmer can assign a specific value to any enumerator. Ex: enum TvChannels {TC_CBS = 2, TC_NBC = 5, TC_ABC = 7};

Figure 10.1.1: Enumeration example. */


#include <iostream>
using namespace std;

/* Manual controller for traffic light */
int main() {
   enum LightState {LS_RED, LS_GREEN, LS_YELLOW, LS_DONE};
   LightState lightVal;
   char userCmd;

   lightVal = LS_RED;
   userCmd = '-';

   cout << "User commands: n (next), r (red), q (quit)." << endl << endl;

   lightVal = LS_RED;
   while (lightVal != LS_DONE) {
      
      if (lightVal == LS_GREEN) {
         cout << "Green light  ";
         cin >> userCmd;
         if (userCmd == 'n') { // Next
            lightVal = LS_YELLOW;
         }
      }
      else if (lightVal == LS_YELLOW) {
         cout << "Yellow light  ";
         cin >> userCmd;
         if (userCmd == 'n') { // Next
            lightVal = LS_RED;
         }
      }
      else if (lightVal == LS_RED) {
         cout << "Red light  ";
         cin >> userCmd;
         if (userCmd == 'n') { // Next
            lightVal = LS_GREEN;
         }
      }
      
      if (userCmd == 'r') { // Force immediate red
         lightVal = LS_RED;
      }
      else if (userCmd == 'q') { // Quit
         lightVal = LS_DONE;
      }
   }
   
   cout << "Quit program." << endl;

   return 0;
}



