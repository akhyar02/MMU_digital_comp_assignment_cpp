# MMU_digital_comp_assignment_cpp

This C++ console application simulates Netflix's recommendation system and demonstrates how Netflix disrupted traditional video rental and cable TV industries through Clayton Christensen's Disruptive Innovation model.

## Features (To Be Implemented)
- [ ] User registration and login
- [ ] Movie catalog browsing
- [ ] Personalized recommendations
- [ ] Watch history tracking

## SETUP FOR BEGINNERS

This guide assumes you have **no programming experience**. Follow these steps carefully.

### What You Need
Before starting, you need to install two things on your computer:
1. **Git** - A tool to download and manage code from the internet
2. **C++ Compiler** - A program that converts C++ code into something your computer can run

### Step 1: Install Git (Version Control)

**What is Git?** Git helps you download code from the internet and keep track of changes.

#### For Windows Users:
1. Go to [https://git-scm.com/download/windows](https://git-scm.com/download/windows)
2. Download the installer
3. Run the installer and click "Next" through all the options (the defaults are fine)
4. When it asks about "Adjusting your PATH environment", select "Git from the command line and also from 3rd-party software"

#### For Mac Users:
1. Open **Terminal** (press Cmd+Space, type "terminal", press Enter)
2. Type this command and press Enter:
   ```bash
   xcode-select --install
   ```
3. A popup will appear - click "Install" and wait for it to finish

#### For Ubuntu/Linux Users:
1. Open **Terminal** (Ctrl+Alt+T)
2. Type these commands one by one and press Enter after each:
   ```bash
   sudo apt update
   sudo apt install git
   ```

### Step 2: Set Up Git with Your Information
1. Open **Terminal** (Mac/Linux) or **Git Bash** (Windows)
2. Type these commands, replacing the text with your actual name and email:
   ```bash
   git config --global user.name "Your Full Name"
   git config --global user.email "your.email@student.mmu.edu.my"
   ```

### Step 3: Install C++ Compiler

**What is a C++ Compiler?** It's a program that translates human-readable C++ code into machine code your computer can execute.

#### For Windows Users:
1. Go to [https://www.mingw-w64.org/downloads/](https://www.mingw-w64.org/downloads/)
2. Download **MSYS2** installer
3. Run the installer and follow the setup wizard
4. After installation, open **MSYS2** terminal
5. Type this command and press Enter:
   ```bash
   pacman -S mingw-w64-x86_64-gcc make
   ```

#### For Mac Users:
- You already installed this in Step 1! The Xcode Command Line Tools include the C++ compiler.

#### For Ubuntu/Linux Users:
1. Open **Terminal**
2. Type this command and press Enter:
   ```bash
   sudo apt install build-essential
   ```

### Step 4: Verify Everything Works
1. Open **Terminal** (Mac/Linux) or **Git Bash** (Windows)
2. Type these commands one by one to check if everything is installed:
   ```bash
   git --version
   g++ --version
   make --version
   ```
3. If you see version numbers for each command, you're ready to go!

## REQUIREMENTS
- C++11 or later
- Standard C++ libraries

## HOW TO GET AND RUN THE CODE

### Step 1: Download the Code
1. Open **Terminal** (Mac/Linux) or **Git Bash** (Windows)
2. Navigate to where you want to save the project (like your Desktop):
   ```bash
   cd Desktop
   ```
3. Download the code from the internet:
   ```bash
   git clone <repository-url>
   ```
4. Enter the project folder:
   ```bash
   cd MMU_digital_comp_assignment_cpp
   ```

### Step 2: Build the Program
**What does "build" mean?** Building converts the human-readable C++ code into a program your computer can run.

1. In the same terminal window, type:
   ```bash
   make
   ```
2. Wait for it to finish. You should see some text appear, and then it will stop.

### Step 3: Run the Program
1. Type this command to start the Netflix simulation:
   ```bash
   make run
   ```
2. The program will start and you can interact with it!

### If Something Goes Wrong
- Make sure you completed all the setup steps above
- Check that you're in the right folder (you should see files like `main.cpp` when you type `ls`)
- Ask a teammate for help or contact the instructor

## WORKING WITH YOUR TEAM (Git Collaboration)

**Important:** Only ONE person should set up the project initially and share it with the team.

### For the Project Creator (Do This ONCE):
1. Create the project on GitHub/GitLab
2. Share the repository URL with your teammates

### For Team Members:
1. Get the repository URL from your teammate
2. Follow the "HOW TO GET AND RUN THE CODE" section above

### Daily Collaboration Commands

#### Before You Start Working (Get Latest Changes)
**What this does:** Downloads any changes your teammates made while you were away.

1. Open **Terminal** in your project folder
2. Get the latest updates:
   ```bash
   git pull
   ```
3. This ensures you have the most recent version before making changes

#### After You Finish Working (Share Your Changes)
**What this does:** Uploads your changes so teammates can see them.

1. Check what files you changed:
   ```bash
   git status
   ```
2. Add your changes (this "stages" them):
   ```bash
   git add .
   ```
3. Save your changes with a message explaining what you did:
   ```bash
   git commit -m "Describe what you changed here"
   ```
   Example: `git commit -m "Added user login function"`

4. Upload your changes to the internet:
   ```bash
   git push
   ```

### Complete Daily Workflow Example:
```bash
# Start of your work session
git pull                                    # Get teammates' latest changes

# Work on your code here...

# End of your work session
git status                                  # See what you changed
git add .                                   # Stage all your changes
git commit -m "Added movie recommendation feature"  # Save with description
git push                                    # Share with team
```

### Important Team Rules:
- **Always `git pull` before starting work** - This prevents conflicts
- **Always `git push` when you're done** - So teammates get your changes
- **Write clear commit messages** - Help teammates understand what you did
- **Communicate with your team** - Let them know when you're working on something

### If You Get an Error:
- **"Your branch is behind"**: Run `git pull` first, then try `git push` again
- **"Merge conflict"**: Ask your instructor or experienced teammate for help
- **"Permission denied"**: Make sure the project creator added you as a collaborator

## CLEAN UP
To clean up the build files, run:
    ```bash
    make clean
    ```