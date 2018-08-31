#include <iostream>
using namespace std;

int main (void){

  int x;
  int count = 0; //(1) initialize a counter to 0 to count number of values
  int choice; //This is the choice that controls the looping continuation or termination
  double sum = 0; //Initialize the sum to 0 to make sure the sum at the beginning is 0
  double average;

  do//(2) read N grades and computer their sum, count ensures N entries
  {
    //read each number and computer their sum:
    cout << "\n Enter a grade <Enter>: ";
    cin >> x;
    sum = sum + x;
    count++; //(3) update the counter
    //prompt the user:
    cout << "Do you wish to enter another grade? (1 for yes and 0 or other key for no):" << endl;
    cin >> choice;
  } while (choice == 1);

  if(count == 0)
    cout << "You haven't entered any number, no average will be computed, bye \n";
  else{
    average = sum/count; //Notice that we have divided the count this time
    cout << "The average of these " << count << " grades is " << average << endl;
  }
  return 0;
}
