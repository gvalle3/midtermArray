/*
W15664768 Midterm Array Program Question 1:
Write a program to read numbers from the user 
and put it in an array. 
Ask for the array size before you 
ask for the actual numbers. Print the array
*/
# include <iostream>

using namespace std;

int main()
{
  int SIZE;
  cout << "Midterm Response 1:" << endl;
  cout << "input array size: ";
  cin >> SIZE;
  int userArray[SIZE];
  bool done = false;
  for (int a = 0; a <= SIZE - 1; a++)
  {
    cout << "input a whole number: ";
    int n;
    cin >> n;
    userArray[a] = n;
  }
  cout << "User Array: ";
  for (int u = 0; u < SIZE; u++)
    cout << userArray[u] << " ";
  cout << endl;
  return 0;
}