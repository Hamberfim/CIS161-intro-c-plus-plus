/* Write code to read a list of song durations and song names from input. For each line of input, set the duration and name of currSong. Then add currSong to songsList. Input first receives a song duration, then the name of that song (which you can assume is only one word long). Input example:
424 Time
383 Money
-1 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Song {
   public:
      void SetDurationAndName(int songDuration, string songName) {
         duration = songDuration;
         name = songName;
      }
      void PrintSong() const {
         cout << duration << " - " << name << endl;
      }
      int GetDuration() const { return duration; }
      string GetName() const { return name; }

   private:
      int duration;
      string name;
};

int main() {
   vector<Song> songsList;
   Song currSong;
   int currDuration;
   string currName;
   unsigned int i;

   cin >> currDuration;
   while (currDuration >= 0) {

      /* Your code goes here */
      cin >> currName;
      currSong.SetDurationAndName(currDuration, currName);
      songsList.push_back(currSong);

      cin >> currDuration;
   }

   for (i = 0; i < songsList.size(); ++i) {
      currSong = songsList.at(i);
      currSong.PrintSong();
   }

   return 0;
}
