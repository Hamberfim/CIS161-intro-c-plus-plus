/* 
Example: RunnerInfo class
The RunnerInfo class below maintains information about a person who runs, 
	allowing a class user to set the time run and 
	the distance run, and 
	to get the runner's speed. 
	
The subsequent question set asks for the missing parts to be completed.
10.5.2: Simple class example: RunnerInfo. 

Complete the missing parts of the figure.

Output: 
	Runner1's speed in MPH: 12
	Runner2's speed in MPH: 9
*/

#include <iostream>
using namespace std;

class RunnerInfo {
   public:                                
      void SetTime(int timeRunSecs);       // Time run in seconds
      void SetDist(double distRunMiles);   // Distance run in miles
      double GetSpeedMph();                // Speed in miles/hour
   //__(A)__ added private:
   private:
      int timeRun;
      double distRun;
};

//__(B)__ added RunnerInfo
void RunnerInfo::SetTime(int timeRunSecs) {
   timeRun = timeRunSecs;  // timeRun refers to data member
}
// __(C)__ added RunnerInfo::
void RunnerInfo::SetDist(double distRunMiles) {
   distRun = distRunMiles;
}

double RunnerInfo::GetSpeedMph(){
   return distRun / (timeRun / 3600.0); // miles / (secs / (hrs / 3600 secs))
}

int main() {
   RunnerInfo runner1; // User-created object of class type RunnerInfo
   RunnerInfo runner2; // A second object

   runner1.SetTime(360);
   runner1.SetDist(1.2);

   runner2.SetTime(200);
   runner2.SetDist(0.5);

   // cout << "Runner1's speed in MPH: " << runner1.__(D)__ << endl;
   cout << "Runner1's speed in MPH: " << runner1.GetSpeedMph() << endl;
   // cout << "Runner2's speed in MPH: " << __(E)__ << endl;
   cout << "Runner2's speed in MPH: " << runner2.GetSpeedMph() << endl;

   return 0;
}