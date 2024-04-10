/* The program first reads integer certificateCount from input, representing the number of pairs of inputs to be read. Each pair has a string and a character, representing the certificate's holder and division, respectively. One Certificate object is created for each pair and added to vector certificateList. Write the PrintSelectedCertificates() function in the RecordsManager class using Print() to output all the Certificate objects with division equal to 'B'.

Ex: If the input is:

4
Mel A Avi B Ben B Abe A

then the output is:

Certificate: Avi, Division: B
Certificate: Ben, Division: B */

#include <iostream>
#include <vector>
using namespace std;

class Certificate {
   public:
      void SetDetails(string newHolder, char newDivision);
		char GetDivision() const;
		void Print() const;
   private:
      string holder;
      char division;
};

void Certificate::SetDetails(string newHolder, char newDivision) {
   holder = newHolder;
   division = newDivision;
}

char Certificate::GetDivision() const {
	return division;
}

void Certificate::Print() const {
	cout << "Certificate: " << holder << ", Division: " << division << endl;
}

class RecordsManager {
   public:
      void InputCertificates();
      void PrintSelectedCertificates();
   private:
      vector<Certificate> certificateList;
};

void RecordsManager::InputCertificates() {
   Certificate currCertificate;
   string currHolder;
   char currDivision;
   int certificateCount;
   unsigned int i;
  
   cin >> certificateCount;
   for (i = 0; i < certificateCount; ++i) {
      cin >> currHolder;
      cin >> currDivision;
      
      currCertificate.SetDetails(currHolder, currDivision);
      certificateList.push_back(currCertificate);
   }     
}

/* Your code goes here */
void RecordsManager::PrintSelectedCertificates() {
   for (const auto& certificate : certificateList) {
      if (certificate.GetDivision() == 'B') {
         certificate.Print();
      }
   }
}

int main() {
   RecordsManager recordsManager;
  
   recordsManager.InputCertificates();
   recordsManager.PrintSelectedCertificates();
   
   return 0;
}
