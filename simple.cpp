#include <iostream>
#include <stdlib.h>
using namespace std;

class Candidate {
   public:
      Candidate(string candidate_name, unsigned int candidate_age, string candidate_party) {
         name = candidate_name;
	 age = candidate_age;
	 party = candidate_party;
      }

      Candidate() : name(""), age(0), party("") {};

      void show() {
         cout << name << " [" << party << "] Age " << age << endl;
      }

   private:
      string name = "";
      unsigned int age = 0;
      string party = "";
};

int main() {
   Candidate *democrat = new Candidate("Joe Biden", 81, "Democrat");
   Candidate republican("Donald Trump", 78, "Republican");

   delete democrat;
   democrat = new Candidate ("Kamala Harris", 59, "Democrat");

   republican.show();
   democrat->show();

   delete(democrat);
}
