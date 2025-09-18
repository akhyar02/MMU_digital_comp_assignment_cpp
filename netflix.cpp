#include <iostream>
#include <vector>
#include <string>

using namespace std;

void displayMenu();
void clearScreen();

int main()
{
  cout << "Welcome to Netflix Recommendation System" << endl;
  cout << "Demonstrating Disruptive Innovation in Entertainment" << endl;

  displayMenu();

  return 0;
}

void displayMenu()
{
  bool isRunning = true;
  while (isRunning)
  {
    clearScreen();
    cout << endl;
    cout << "=== MAIN MENU ===" << endl;
    cout << "1. Register User" << endl;
    cout << "2. Login" << endl;
    cout << "3. Browse Movies" << endl;
    cout << "4. Get Recommendations" << endl;
    cout << "5. Exit" << endl;

    cout << "Select an option (1-5): ";
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Register User selected." << endl;
      break;
    case 2:
      cout << "Login selected." << endl;
      break;
    case 3:
      cout << "Browse Movies selected." << endl;
      break;
    case 4:
      cout << "Get Recommendations selected." << endl;
      break;
    case 5:
      cout << "Exiting..." << endl;
      isRunning = false;
      break;
    default:
      cout << "Invalid option. Please try again." << endl;
      break;
    }
  }
}

void clearScreen()
{
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}