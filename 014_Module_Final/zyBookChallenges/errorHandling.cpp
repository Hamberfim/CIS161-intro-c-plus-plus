/* Character grade is read from input. Complete the try block to throw a runtime error exception with the message "Input for grade is bad" if grade is < 'A' or > 'F'.
Ex: If input is E, then the output is:
Grade: E
Ex: If input is G, then the output is:
Error: Input for grade is bad */
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
   char grade;

   cin >> grade;

   try {
      if (grade < 'A' || grade > 'F') {
         throw runtime_error("Input for grade is bad");
      }
      cout << "Grade: " << grade << endl;
   }
   catch (runtime_error& excpt) {
      cout << "Error: " << excpt.what() << endl;
   }

   return 0;
}


/* Complete the exception-handling construct to catch a runtime error exception and output "Positive number not found: " followed by the exception's internal string value.

Ex: If input is 39, then the output is:

Positive number submitted: 39
Ex: If input is -45, then the output is:

Positive number not found: Value out of range */
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
   int num;

   cin >> num;

   try {
      if (num <= 0) {
         throw runtime_error("Value out of range");
      }
      cout << "Positive number submitted: " << num << endl;
   }
   catch (runtime_error& excpt) {
      cout << "Positive number not found: " << excpt.what() << endl;
   }

   return 0;
}

/* String yourFile and integer yourFilesize are read from input. Complete the try block to output "Uploading file: " followed by yourFile with error checking:

If the first character of yourFile is not a letter, throw a runtime exception with the message "File name must start with a letter".
If yourFilesize is < 100, throw a runtime exception with the message "File size must be at least 100".
Ex: If input is cabbage 109, then the output is:

Uploading file: cabbage
Ex: If input is %parsnip 109, then the output is:

Error: File name must start with a letter
Ex: If input is cabbage 83, then the output is:

Error: File size must be at least 100
Note: isalpha(yourFile[0]) returns true if the first character of yourFile is a letter. */
#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
   string yourFile;
   int yourFilesize;

   cin >> yourFile;
   cin >> yourFilesize;

   try {
      if (!isalpha(yourFile[0])) {
         throw runtime_error("File name must start with a letter");
      }
      if (yourFilesize < 100) {
         throw runtime_error("File size must be at least 100");
      }
      cout << "Uploading file: " << yourFile << endl;
   }
   catch (runtime_error& excpt) {
      cout << "Error: " << excpt.what() << endl;
   }

   return 0;
}



