/* 11.3.3: Classes and vectors/classes.

The program first reads integer licenseCount from input, representing the number of pairs of inputs to be read. Each pair has a string and an integer, representing the license's state and fee, respectively. One License object is created for each pair and added to vector licenseList. Output "Average license fee: ", followed by the average fee of all the License objects as an integer. End with a newline.

Ex: If the input is:

3
MI 213 CO 215 MS 310

then the output is:

Average license fee: 246

Note: The ArrayList has at least one element. */

#include <iostream>
#include <vector>
using namespace std;

class License {
   public:
      void SetStateAndFee(string newState, int newFee);
		int GetFee() const;
   private:
      string state;
      int fee;
};

void License::SetStateAndFee(string newState, int newFee) {
   state = newState;
   fee = newFee;
}

int License::GetFee() const {
	return fee;
}

int main() {
   vector<License> licenseList;
   License currLicense;
   string currState;
   int currFee;
	int sumFee;
   int licenseCount;
   unsigned int i;

   cin >> licenseCount;
   for (i = 0; i < licenseCount; ++i) {
      cin >> currState;
      cin >> currFee;
      
      currLicense.SetStateAndFee(currState, currFee);
      licenseList.push_back(currLicense);
   }
	
	sumFee = 0;

   /* Your code goes here */
   for (const auto& license : licenseList) {
      sumFee += license.GetFee();
   }
   
   int averageFee = sumFee / licenseCount;
   cout << "Average license fee: " << averageFee << endl;
   

   return 0;
}
