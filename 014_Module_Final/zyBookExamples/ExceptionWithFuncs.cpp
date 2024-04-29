/* 14.2 Exceptions with functions
The power of exceptions becomes clearer when used within a function. If an exception is thrown within a function and not caught within that function, then the function is immediately exited and the calling function is checked for a handler, and so on up the function call hierarchy. The following illustrates; note the clarity of the normal code.

Figure 14.2.1: BMI example using exception-handling constructs along with functions.  

Suppose getWeight() throws an exception of type Exception. GetWeight() immediately exits, up to main() where the call was in a try block, so the catch block catches the exception.

Note the clarity of the code in main(). Without exceptions, GetWeight() would have had to somehow indicate failure, perhaps returning -1. Then main() would have needed an if-else statement to detect such failure, obscuring the normal code.

If no handler is found going up the call hierarchy, then terminate() is called, which typically aborts the program.

In C++, when an exception is thrown, the function in which it was thrown (in this case, GetWeight()) immediately exits. The program then starts to look for the nearest catch block that can handle the exception type, going up the call stack.

In your code, the catch block in the main() function will catch the exception thrown by GetWeight(). This is because the call to GetWeight() is inside a try block in main().

Without exceptions, you would indeed need to use some other way to indicate an error, such as returning a special value like -1 from GetWeight(). Then, in main(), you would need to check the return value of GetWeight() and handle the error case separately, which can make the code more complex and harder to read.

If an exception is thrown and no suitable catch block is found in the entire call stack, then the function std::terminate() is called, which by default aborts the program. This is why it’s important to have a catch block to handle any exceptions that might be thrown.
*/

#include <iostream>
#include <stdexcept>
using namespace std;

int GetWeight() {
   int weightParam;     // User defined weight
   
   // Get user data
   cout << "Enter weight (in pounds): ";
   cin >> weightParam;
   
   // Error checking, non-negative weight
   if (weightParam < 0) {
      throw runtime_error("Invalid weight.");
   }
   return weightParam;
}

int GetHeight() {
   int heightParam;     // User defined height
   
   // Get user data
   cout << "Enter height (in inches): ";
   cin >> heightParam;
   
   // Error checking, non-negative height
   if (heightParam < 0) {
      throw runtime_error("Invalid height.");
   }
   return heightParam;
}

int main() {
   int weightVal;        // User defined weight (lbs)
   int heightVal;        // User defined height (in)
   float bmiCalc;        // Resulting BMI
   char quitCmd;         // Indicates quit/continue
   
   quitCmd = 'a';

   while (quitCmd != 'q') {
      try {
         // Get user data
         weightVal = GetWeight();
         heightVal = GetHeight();
         
         // Calculate BMI and print user health info if no input error
         // Source: http://www.cdc.gov/
         bmiCalc = (static_cast<float>(weightVal) /
                    static_cast<float>(heightVal * heightVal)) * 703.0;
         
         cout << "BMI: " << bmiCalc << endl;
         cout << "(CDC: 18.6-24.9 normal)" << endl;
      }
      catch (runtime_error &excpt) {
         // Prints the error message passed by throw statement
         cout << excpt.what() << endl;
         cout << "Cannot compute health info." << endl;
      }
      
      // Prompt user to continue/quit
      cout << endl << "Enter any key ('q' to quit): ";
      cin >> quitCmd;
   }
   
   return 0;
}

/* 14.3 Multiple handlers
Different throws in a try block may throw different exception types. Multiple handlers may exist, each handling a different type. The first matching handler executes; remaining handlers are skipped.

catch(...) is a catch-all handler that catches any type, which is useful when listed as the last handler.

Construct 14.3.1: Exception-handling: multiple handlers.
// ... means normal code
...
try {
   ...
   throw objOfExcptType1;
   ...
   throw objOfExcptType2;
   ...
   throw objOfExcptType3;
   ...
}
catch (ExcptType1& excptObj) {
   // Handle type1
}
catch (ExcptType2& excptObj) {
   // Handle type2
}
catch (...) {
   // Handle others (e.g., type3)
}
... // Execution continues here */

