#include <iostream>
#include <string>
using namespace std;

int main() {
  string secret = "please";
  string word;
  cout << "Enter word\n";
  cin >> word;
  
  if (word == secret)
    cout << "You guessed the word correctly" << endl;
  
  else     
    cout << "You guessed the word incorrectly" << endl;


}