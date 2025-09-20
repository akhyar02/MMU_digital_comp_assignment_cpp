#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct User
{
  string username;
  int age;
};

// app states
User *currentUser = nullptr;

// mocking db
vector<User> users;

// prototypes
void displayMenu();
void clearScreen();
void registerUser();
void loginUser();

int main()
{
  cout << "Welcome to Netflix Recommendation System" << endl;
  cout << "Demonstrating Disruptive Innovation in Entertainment" << endl;

  bool isRunning = true;

  while (isRunning)
  {
    clearScreen();
    displayMenu();

    int choice;
    cout << "Enter your choice: ";

    // this if only runs when input is not valid
    if (!(cin >> choice))
    {
      cout << "Invalid input! Please enter a number between 1 and 5." << endl;
      cout << endl;

      // just to clear the input buffer, u guys can ignore this
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      // restart loop
      cout << "Press ENTER to continue...";
      cin.ignore();
      continue;
    }

    cin.ignore(); // clear input buffer

    // above one checks for input, this one checks whether the input
    // is within our defined menu choices
    if (choice < 1 || choice > 5)
    {
      cout << "Please enter a number between 1 and 5." << endl;
      cout << endl;
      cout << "Press ENTER to continue...";
      cin.ignore();
      continue;
    }

    // PART 3: choice flow
    switch (choice)
    {
    case 1:
      registerUser();
      break;
    case 2:
      loginUser();
      break;
    case 3:
      cout << "Browse Movies - Feature coming soon!" << endl;
      break;
    case 4:
      cout << "Get Recommendations - Feature coming soon!" << endl;
      break;
    case 5:
      cout << "Exiting the program. Goodbye!" << endl;
      isRunning = false;
      break;
    default:
      cout << "Invalid choice! Please try again." << endl;
    }
  }

  return 0;
}

void displayMenu()
{
  clearScreen();
  cout << endl;
  cout << "=== MAIN MENU ===" << endl;
  cout << "1. Register User" << endl;
  cout << "2. Login" << endl;
  cout << "3. Browse Movies" << endl;
  cout << "4. Get Recommendations" << endl;
  cout << "5. Exit" << endl;

  if (currentUser != nullptr)
  {
    cout << endl;
    cout << "Logged in as: " << currentUser->username << endl;
  }
}

void registerUser()
{
  clearScreen();
  cout << "=== USER REGISTRATION ===" << endl;

  User newUser;

  cout << "Enter username: ";
  getline(cin, newUser.username);

  // no need password for simplicity
  // but validate username exist or not
  for (const auto &user : users)
  {
    if (user.username == newUser.username)
    {
      cout << "Username already exists! Please choose a different one." << endl;
      cout << endl;
      cout << "Press ENTER to continue...";
      cin.ignore();
      return;
    }
  }

  // If we reach here, the username is unique and added to our
  // mock database
  users.push_back(newUser);

  // ask for age for the pg recommendation logic
  cout << "Enter your age: ";
  while (!(cin >> newUser.age) || newUser.age < 1 || newUser.age > 100)
  {
    cout << "Please enter a valid age between 1 and 100: ";

    // clear input buffer
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
  cin.ignore(); // clear input buffer

  users.push_back(newUser);

  cout << endl;
  cout << "Registration Successful!" << endl
       << endl;

  cout << "Profile Summary:" << endl;
  cout << "Username: " << newUser.username << endl;
  cout << "Age: " << newUser.age << endl;
  cout << endl;

  cout << "Press ENTER to continue...";
  cin.ignore();
}

void loginUser()
{
  clearScreen();
  cout << "=== USER LOGIN ===" << endl;

  string username;
  bool result = false;
  cout << "Enter username: ";
  getline(cin, username);

  for (auto &user : users)
  {
    if (user.username == username)
    {
      currentUser = &user;
      result = true;
      break;
    }
  }

  if (result)
  {
    cout << "Login successful!" << endl;
  }
  else
  {
    cout << "Login failed!" << endl;
  }
  cout << endl;
  cout << "Press ENTER to continue...";
  cin.ignore();
}

void clearScreen()
{
#ifdef _WIN32
  system("cls");
#else
  system("clear");
#endif
}